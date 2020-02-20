-- MySQL dump 10.13  Distrib 8.0.15, for macos10.14 (x86_64)
--
-- Host: 127.0.0.1    Database: DacDB
-- ------------------------------------------------------
-- Server version	8.0.15

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
 SET NAMES utf8 ;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `BookTable`
--

DROP TABLE IF EXISTS `BookTable`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
 SET character_set_client = utf8mb4 ;
CREATE TABLE `BookTable` (
  `book_id` int(11) NOT NULL,
  `subject_name` varchar(256) NOT NULL,
  `book_name` varchar(256) DEFAULT NULL,
  `author_name` varchar(256) DEFAULT NULL,
  `price` float DEFAULT NULL,
  PRIMARY KEY (`book_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `BookTable`
--

LOCK TABLES `BookTable` WRITE;
/*!40000 ALTER TABLE `BookTable` DISABLE KEYS */;
INSERT INTO `BookTable` VALUES (1001,'C','Programming with C(Schaums Outlines Series)','Byron S Gottfried',575),(1002,'C','The C Programming Language','Brian W. Kernighan / Dennis Ritchie',419),(1003,'C','EXPERT C PROGRAMMING','VAN DER LINDEN',649),(1004,'C','The C Companion','Allen I. Holub',2775),(1005,'C','Head First C','Griffiths David',800),(1006,'C++','The C++ Programming Language','Bjarne Stroustrup',629),(1007,'C++','C++ Primer Plus','Stephen Prata',1211),(1008,'C++','More Effective C++','Scott Meyers',619),(1009,'C++','C++: Effective Object-Oriented Software Construction','Kayshav Dattatri',838),(1010,'C++','C++: The Complete Reference','Herbert Schildt',499),(1011,'Java SE','Head First Java','Kathy Sierra',850),(1012,'Java SE','Java: The Complete Reference','Herbert Schildt',850),(1013,'Java SE','The Java Programming Language','James Gosling',2736),(1014,'Java SE','Effective Java','Joshua Bloch',377),(1015,'Java SE','Big Java Early Objects','Cay Horstman',600),(1016,'AWP','HTML5 – Up and Running','Mark Pilgrim',1658),(1017,'AWP','Head First HTML and CSS','Elisabeth Robson',1175),(1018,'AWP','JavaScript: The Definitive Guide','Flanagan David',1200),(1019,'AWP','Inside XML','Steven Holzner',1193),(1020,'AWP','PHP and MySQL Web Development','Luke Welling/Laura Thomson',735),(1021,'OS','Design of the UNIX Operating System','Maurice J. Bach',255),(1022,'OS','Operating Systems: Internals and Design Principles','William Stallings',570),(1023,'OS','Operating System: Concepts and Techniques','M Naghibzadeh',1595),(1024,'OS','Modern Operating Systems','Andrew S. Tanenbaum',6383),(1025,'OS','Operating System Concept','Galvin',575),(1026,'ABC','PQR','XYZ',550);
/*!40000 ALTER TABLE `BookTable` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2019-09-03 20:59:41
