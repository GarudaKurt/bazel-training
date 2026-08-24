pipeline {
    agent any
    
    stages {

       stage('Build') {
           steps {
	       echo 'Build bazel main file'
               sh '''
                     bazel build //main:main
                  '''
           }
        }
       stage('UnitTest-Build') { 
          steps {  
              echo 'Build unit test'
               sh '''
                  bazel test //... 
               '''
           }
       }
       stage('For build Output') {
           echo 'runnong build test'
           sh '''
                bazel-bin/main/main
              '''
       }
       stage('For Rectangle unit test Output') {
            sh '''
                  bazel test //lib/Rectangle/UnitTest:testRectangle
               ''' 
       }
       stage('For Square unit test Output') {
            sh '''
                   bazel test //lib/Square/UnitTest:testSquare
               '''
       }

    }
    post {
        success { 
            echo 'Build and unit test passed'
        }
        failure { 
           echo 'Build or unit test failed'
        }
    }
} 
