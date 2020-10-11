CREATE DATABASE epytodo;
USE epytodo;

CREATE TABLE IF NOT EXISTS user
(
    user_id INT(10) UNSIGNED NOT NULL AUTO_INCREMENT PRIMARY KEY,
    username VARCHAR(25) NOT NULL,
    email VARCHAR(50),
    password VARCHAR(20) NOT NULL
);

CREATE TABLE IF NOT EXISTS task
(
    task_id INT UNSIGNED NOT NULL AUTO_INCREMENT PRIMARY KEY,
    title VARCHAR(50) NOT NULL,
    begin datetime NOT NULL DEFAULT CURRENT_TIMESTAMP,
    end datetime NULL,
    status enum("not started", "in progress", "done") NOT NULL DEFAULT 'not started'
);

CREATE TABLE IF NOT EXISTS user_has_task
(
    id INT NOT NULL AUTO_INCREMENT PRIMARY KEY,
    fk_user_id INT UNSIGNED NOT NULL,
    fk_task_id INT UNSIGNED NOT NULL
);