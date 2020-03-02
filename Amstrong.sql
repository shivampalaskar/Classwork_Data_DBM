
DELIMITER //

CREATE FUNCTION sf_arm ( number INT)
RETURNS INT DETERMINISTIC

BEGIN
DECLARE num INT DEFAULT 0;
DECLARE sum INT DEFAULT 0;
DECLARE remainder INT DEFAULT 0;

SET num = number;
WHILE number!= 0 DO 
   SET remainder = number mod 10;

   SET sum = sum + remainder * remainder * remainder;
      SET number = number /10;
END WHILE;
IF sum= number THEN
  SET number =sum;
END IF;
INSERT INTO result VALUES(sum);

RETURN sum;

END //

DELIMITER ;

CALL sf_arm(153);
