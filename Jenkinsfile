pipeline {
    agent any
    stages {
        stage('Build') { 
            steps {
                sh 'cmake -B build -S .' 
                sh 'cmake --build build'
            }
        }
    }
} 