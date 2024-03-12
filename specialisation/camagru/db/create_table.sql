CREATE TABLE users (
    id INT AUTO_INCREMENT PRIMARY KEY,
    username VARCHAR(50) NOT NULL,
    email VARCHAR(50) NOT NULL UNIQUE,
    password VARCHAR(255) NOT NULL,
    activation_code VARCHAR(255) NOT NULL,
    status TINYINT(1) NOT NULL DEFAULT 0
) ENGINE=InnoDB;