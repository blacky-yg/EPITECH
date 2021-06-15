FROM maven:3.5-jdk-8-alpine AS builder

WORKDIR /usr/worker

COPY . /usr/worker

RUN mvn dependency:resolve

RUN mvn package

FROM openjdk:8-jre-alpine

WORKDIR /usr/target

COPY --from=builder /usr/worker/target/worker-jar-with-dependencies.jar .

CMD ["java", "-jar", "worker-jar-with-dependencies.jar"]