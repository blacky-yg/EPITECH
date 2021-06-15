FROM debian:buster

RUN apt-get update && apt-get -y install nodejs npm

COPY package.json ./

RUN npm install

COPY . .

EXPOSE 3000

CMD ["node", "app.js"]