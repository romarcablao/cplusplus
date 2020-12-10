pipeline {
    agent {
        label "aws"
    }

    stages {
        stage("build") {
            steps {
                echo "building app..."
            }
        }

        stage("test") {
            steps {
                echo "testing app..." > test.logs
            }
        }

        stage("deploy") {
            steps {
                echo "deploying app..."
            }
        }
        
    }
}
