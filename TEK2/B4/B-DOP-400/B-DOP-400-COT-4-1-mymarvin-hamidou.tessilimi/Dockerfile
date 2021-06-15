FROM jenkins/jenkins:lts

COPY my_marvin.yml /var/jenkins_home/jenkins.yml

COPY jenkins_plugins /usr/share/jenkins_plugins

RUN jenkins-plugins-cli -f /usr/share/jenkins_plugins