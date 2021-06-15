FROM python:3

RUN apt-get update && apt-get -y install python3-pip python3-dev

WORKDIR /usr/poll

COPY . /usr/poll

RUN pip install --no-cache-dir -r requirements.txt

EXPOSE 80

COPY . .

CMD [ "flask", "run", "--host=0.0.0.0", "--port=80"]