DELIMITER //
DROP FUNCTION IF EXISTS sf_arm;
CREATE FUNCTION sf_arm ( number INT)
RETURNS VARCHAR(50) DETERMINISTIC

BEGIN
DECLARE num INT DEFAULT number;
DECLARE sum INT DEFAULT 0;
DECLARE remainder INT DEFAULT 0;
DECLARE result VARCHAR(50) DEFAULT  CONCAT(num,' ','IS NOT ARMSTRONG NUMBER');

WHILE number > 0 DO
   SET remainder = number mod 10;
   SET sum = sum + remainder * remainder * remainder;
   SET number = number DIV 10;
END WHILE;

IF sum = num THEN
SET result = CONCAT(num,' ','IS ARMSTRONG NUMBER');
END IF;

RETURN result;
END //

DELIMITER ;

SELECT sf_arm(153) FROM DUAL;
