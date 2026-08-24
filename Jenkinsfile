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
       stage('Test-Build') { 
          steps {  
              echo 'Build unit test'
               sh '''
                  bazel test //... 
               '''
        }
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
