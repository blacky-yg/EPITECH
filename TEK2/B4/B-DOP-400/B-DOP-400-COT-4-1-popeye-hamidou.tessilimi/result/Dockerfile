FROM node:12-alpine

WORKDIR /usr/result

COPY package.json /usr/result

RUN npm install

COPY . .

EXPOSE 80

CMD ["node", "server.js"]