pipeline {
    agent any
    
    options { 
        buildDiscarder ( 
            logRotator( 
                numToKeepStr: '20',
                artifactNumToKeepStr: '10' 
            )
        )
    }
    stages {
      
      stage('Checkout') { 
          steps { 
               checkout scm
          } 
      }

       stage('Build') {
           steps {
	       echo 'Build bazel main file'
               sh '''
                     rm -rf investigation
                     mkdir -p investigation
                     echo "==================== BUILD ===============" | tee investigation/build-results.txt
                     set -o pipefail
                     bazel build //main:main 2>&1 | tee -a investigation/build-results.txt
                  '''
           }
        }
       stage('Run Main') {
           steps {
               sh '''
                       echo "" >> investigation/build-results.txt
                       echo "=========== MAIN OUTPUT ==============" | tee -a investigation/build-results.txt
                        set -o pipefail
                        bazel-bin/main/main 2>&1 | tee -a investigation/build-results.txt 
                  ''' 
           }
       }
       stage('Rectangle Unit Test') { 
            steps {
                sh '''
                      echo "" >> investigation/build-results.txt
                      echo "=============== RECTANGLE TEST ===============" | tee -a investigation/build-results.txt

                      set -o pipefail
                      bazel test //lib/Rectangle/UnitTest:testRectangle 2>&1 | tee -a investigation/build-results.txt
                   '''
            }
       }
       stage('Square Unit Test') { 
            steps {
                sh '''
                     echo "" >> investigation/build-results.txt
                     echo "================== SQUARE TEST=================" | tee -a investigation/build-results.txt
                     set -o pipefail
                     bazel test //lib/Square/UnitTest:testSquare 2>&1 | tee -a investigation/build-results.txt
               '''
            }
       }
    }
    post {
        always {
            junit (
                testResults: 'bazel-testlogs/**/*.xml',
                allowEmptyResults: true
            )
        }
        success { 
            echo 'Build and unit test passed'
        }
        failure { 
          sh '''
                 tar -czf investigation-results.tar.gz investigation/
             '''
             archiveArtifacts ( 
                artifacts: 'investigation-results.tar.gz',
                allowEmptyArchive: true,
                fingerprint: true

             )
        }
    }
} 
