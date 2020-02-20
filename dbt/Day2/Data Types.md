## Data Types
* MySQL supports SQL data types in several categories:
    * Numeric types
    * Date and time types
    * String (character and byte) types
    * Spatial types
    * The JSON data type. 
#### Conventions
    1. For integer types, M indicates the maximum display width. As of MySQL 8.0.17, the display width attribute is deprecated for integer data types and support for it will be removed in a future MySQL version.
    2. For floating-point and fixed-point types, M is the total number of digits that can be stored (the precision).
    3. For string types, M is the maximum length.
    4. D applies to floating-point and fixed-point types and indicates the number of digits following the decimal point (the scale). The maximum possible value is 30, but should be no greater than M−2.
    5. fsp applies to the TIME, DATETIME, and TIMESTAMP types and represents fractional seconds precision; that is, the number of digits following the decimal point for fractional parts of seconds. The fsp value, if given, must be in the range 0 to 6. A value of 0 signifies that there is no fractional part. If omitted, the default precision is 0. 
### Numeric Data Types
* MySQL supports all standard SQL numeric data types. These types include the exact numeric data types as well as the approximate numeric data types.
* Exact numeric data types:
    1. SMALLINT
    2. INTEGER
    3. DECIMAL
    4. NUMERIC
* Approximate numeric data types
    1. FLOAT
    2. REAL
    3. DOUBLE PRECISION
* The keyword INT is a synonym for INTEGER.
* The keywords DEC and FIXED are synonyms for DECIMAL.
* MySQL treats REAL and DOUBLE are synonym for DOUBLE PRECISION 
* The BIT data type stores bit values and is supported for MyISAM, MEMORY, InnoDB, and NDB tables.
* Following are the MySQL Numeric Data types
    1. BIT(M)
        * The BIT data type is used to store bit values. A type of BIT(M) enables storage of M-bit values.
        * M indicates the number of bits per value.
        * It can be between 1 to 64. The default is 1 if M is omitted.
        * Bit-value literals are written using b'val' or 0bval notation. val is a binary value written using zeros and ones.
            * b'2'  =>  (2 is not a binary digit)
            * 0B01  =>  (0B must be written as 0b)
        * By default, a bit-value literal is a binary string : For example, b'111' and b'10000000'
```sql
CREATE TABLE bit_test( bytes BIT(4));
INSERT INTO bit_test VALUES( b'10');    -- OK
INSERT INTO bit_test VALUES( b'100');   -- OK
INSERT INTO bit_test VALUES( b'1000');  -- OK
INSERT INTO bit_test VALUES( b'10001'); -- ERROR: Data too long
```
        * Bit values in result sets are returned as binary values, which may not display well.
        * To convert a bit value to printable form, use a conversion function such as BIN() or HEX(). 
```sql
select bytes + 0 from bit_test;
SELECT BIN(bytes) FROM bit_test;
SELECT OCT(bytes) FROM bit_test;
SELECT HEX(bytes) FROM bit_test;
```
        * Size of BIT is approximately (M+7)/8 bytes.
    2. TINYINT
        * A very small integer. 
        * The signed range is -128 to 127.
        * The unsigned range is 0 to 255.
        * Size of TINYINT in 1 byte.
```sql
CREATE TABLE tinyint_test( id TINYINT(2));
CREATE TABLE tinyint_test( id TINYINT UNSIGNED );
CREATE TABLE tinyint_test( id TINYINT ZEROFILL );
CREATE TABLE tinyint_test( id TINYINT(2) ZEROFILL );
```
        * When used in conjunction with the optional ZEROFILL attribute, the default padding of spaces is replaced with zeros.
    3. BOOL/BOOLEAN
        * These types are synonyms for TINYINT(1)
        * A value of zero is considered false. Nonzero values are considered true
```sql
CREATE TABLE boolean_test( status BOOLEAN );
CREATE TABLE boolean_test( status BOOL );
CREATE TABLE boolean_test( status TINYINT(1) );
```
```sql
INSERT INTO status VALUES( true );
INSERT INTO boolean_test (status ) VALUES (true);
```
    4. SMALLINT
        * A small integer.
        * The signed range is -32768 to 32767.
        * The unsigned range is 0 to 65535.
        * Its size is 2 bytes.
    5. MEDIUMINT
        * A medium-sized integer.
        * The signed range is -8388608 to 8388607.
        * The unsigned range is 0 to 16777215.
        * Its size is 3 bytes.
    6. INT( synonyms : INTEGER )
        * A normal-size integer.
        * The signed range is -2147483648 to 2147483647.
        * The unsigned range is 0 to 4294967295.
        * Its size is 4 bytes.
    7. BIGINT
        * A large integer.
        * The signed range is -9223372036854775808 to
          9223372036854775807.
        * The unsigned range is 0 to 18446744073709551615.
        * It's size is 8 bytes.
    8. DECIMAL
        * It is synonym for DEC, FIXED.
        * A packed "exact" fixed-point number.
        * In MySQL, NUMERIC is implemented as DECIMAL, so the following remarks about DECIMAL apply equally to NUMERIC.
        * M is the total number of digits (the precision) and D is the number of digits after the decimal point (the scale). 
        * The decimal point and (for negative numbers) the - sign are not counted in M. 
        * If D is 0, values have no decimal point or fractional part.
        * The maximum number of digits (M) for DECIMAL is 65. 
        * The maximum number of supported decimals (D) is 30. 
        * If D is omitted, the default is 0. If M is omitted, the default is 10.
        * UNSIGNED, if specified, disallows negative values. 
        * The UNSIGNED attribute is deprecated for columns of type DECIMAL
        * MySQL stores DECIMAL values in binary format. 
```sql
CREATE TABLE emp( sal DECIMAL );
CREATE TABLE emp( sal DECIMAL(5,2) );
``` 
        * Standard SQL requires that DECIMAL(5,2) be able to store any value with five digits and two decimals, so values that can be stored in the salary column range from -999.99 to 999.99.
    9. FLOAT
        * A small (single-precision) floating-point number.
        * The FLOAT type represent approximate numeric data values.   
        * Permissible values are:
            * -3.402823466E+38 to -1.175494351E-38
            * 0
            * 1.175494351E-38 to 3.402823466E+38.
        * These are the theoretical limits, based on the IEEE
          standard. The actual range might be slightly smaller depending on hardware or operating system.
        * M is the total number of digits and D is the number of digits following the decimal point.
        * If M and D are omitted, values are stored to the
        limits permitted by the hardware.
        * A single-precision floating-point number is accurate to approximately 7 decimal places.
        * UNSIGNED, if specified, disallows negative values.
        * The UNSIGNED attribute is deprecated for columns of type FLOAT.
        * Size of float is 4 bytes.
    10. DOUBLE
        * It is synonym for REAL and DOUBLE PRECISION.
        * The DOUBLE type represent approximate numeric data values. 
        * A normal-size (double-precision) floating-point number.
        * Permissible values are:
            * -1.7976931348623157E+308 to -2.2250738585072014E-308
            * 0
            * 2.2250738585072014E-308 to 1.7976931348623157E+308.
        * These are the theoretical limits, based on the IEEE    standard. The actual range might be slightly smaller depending on hardware or operating system.
        * A double-precision floating-point number is accurate to approximately 15 decimal places.
        * UNSIGNED, if specified, disallows negative values.
        * The UNSIGNED attribute is deprecated for columns of type DOUBLE
        * Size of double is 8 bytes.
### Date and time types
    * The date and time data types for representing temporal values are DATE, TIME, DATETIME, TIMESTAMP, and YEAR. 
    * Each temporal type has a range of valid values, as well as a “zero” value that may be used when you specify an invalid value that MySQL cannot represent.
    1. DATE
        * The DATE type is used for values with a date part but no time part. 
        * MySQL retrieves and displays DATE values in 'YYYY-MM-DD' format.
        * *  For example, '2012-12-31', '2012/12/31', '2012^12^31', and '2012@12@31' are equivalent.
        * The supported range is '1000-01-01' to '9999-12-31'.
        * SIZE of DATE is 3 bytes.
    2. TIME
        * MySQL retrieves and displays TIME values in 'hh:mm:ss' format.
        * The hours part may be so large because the TIME type can be used not only to represent a time of day (which must be less than 24 hours), but also elapsed time or a time interval between two events (which may be much greater than 24 hours, or even negative).
        * The range is '-838:59:59.000000' to '838:59:59.000000'.
        * MySQL recognizes TIME values in several formats, some of which can include a trailing fractional seconds part in up to microseconds (6 digits) precision.
        * Size of TIME is 3 bytes
    3. DATETIME
        * The DATETIME type is used for values that contain both date and time parts.
        * MySQL retrieves and displays DATETIME values in 'YYYY-MM-DD hh:mm:ss' format.
        * For example, '2012-12-31 11:30:45', '2012^12^31 11+30+45', '2012/12/31 11*30*45', and '2012@12@31 11^30^45' are equivalent.
        * The date and time parts can be separated by T rather than a space. For example, '2012-12-31 11:30:45' '2012-12-31T11:30:45' are equivalent.
        * The supported range is '1000-01-01 00:00:00' to '9999-12-31 23:59:59'.
        * Size of DATETIME is 8 bytes
    4. YEAR
        * The YEAR type is a 1-byte type used to represent year values.
        * It can be declared as YEAR with an implicit display width of 4 characters, or equivalently as YEAR(4) with an explicit display width.
        * MySQL displays YEAR values in YYYY format, with a range of 1901 to 2155, and 0000
        * Size of year is 1 byte
    5. TIMESTAMP
        * The TIMESTAMP data type is used for values that contain both date and time parts.
        * TIMESTAMP has a range of '1970-01-01 00:00:01' UTC to '2038-01-19 03:14:07' UTC.
        * TIMESTAMP values are stored as the number of seconds since the epoch ('1970-01-01 00:00:00' UTC).
        * A TIMESTAMP cannot represent the value '1970-01-01 00:00:00' because that is equivalent to 0 seconds from the epoch.
        * Size of TIMESTAMP is 4 bytes.
### String (character and byte) types
    * The string data types are CHAR, VARCHAR, BINARY, VARBINARY, BLOB, TEXT, ENUM, and SET.
    * For definitions of character string columns (CHAR, VARCHAR, and the TEXT types), MySQL interprets length specifications in character units.
    * For definitions of binary string columns (BINARY, VARBINARY, and the BLOB types), MySQL interprets length specifications in byte units.
    * The ASCII attribute is shorthand for CHARACTER SET latin1.
    * The UNICODE attribute is shorthand for CHARACTER SET ucs2.
    1. CHAR
        * CHAR is shorthand for CHARACTER.
        * The length of a CHAR column is fixed to the length that you declare when you create the table. 
        * The length can be any value from 0 to 255. 
        * When CHAR values are stored, they are right-padded with spaces to the specified length.
        * When CHAR values are retrieved, trailing spaces are removed
    2. VARCHAR
        * VARCHAR is shorthand for CHARACTER VARYING.
        * MySQL stores VARCHAR values as a 1-byte or 2-byte length prefix plus data. 
        * The length prefix indicates the number of bytes in the value.
        * A VARCHAR column uses one length byte if values require no more than 255 bytes, two length bytes if values may require more than 255 bytes.
        * Values in VARCHAR columns are variable-length strings. The length can be specified as a value from 0 to 65,535. 
        * VARCHAR values are not padded when they are stored.
    3. BINARY
        * The BINARY type is similar to the CHAR type, but stores binary byte strings rather than nonbinary character strings. 
        * The permissible maximum length is the same for BINARY as it is for CHAR.
        * It should be used to store BAR_CODE, QR_CODES, ICONS, DIGITAL SIGNATURE, FINGER PRINT etc.
    4. VARBINARY
        * The VARBINARY type is similar to the VARCHAR type, but stores binary byte strings rather than nonbinary character strings.
        * The permissible maximum length is the same for VARBINARY as it is for VARCHAR.
        * It should be used to store small pictures, company logo, retina scan etc.
    * A BLOB is a binary large object that can hold a variable amount of data. The four BLOB types are TINYBLOB, BLOB, MEDIUMBLOB, and LONGBLOB. 
    * The four TEXT types are TINYTEXT, TEXT, MEDIUMTEXT, and LONGTEXT.
    5. TINYTEXT
        * A TEXT column with a maximum length of 255 characters.
        * Each TINYTEXT value is stored using a 1-byte length prefix that indicates the number of bytes in the value.
        * Stored outside table and away from row. Only address is stored inside table.
    6. TEXT
        * A TEXT column with a maximum length of 65,535 characters.
        *  Each TEXT value is stored using a 2-byte length prefix that indicates the number of bytes in the value.
        * Stored outside table and away from row. Only address is stored inside table.
    7. MEDIUMTEXT
        * A TEXT column with a maximum length of 16,777,215 characters.
        * Each MEDIUMTEXT value is stored using a 3-byte
        length  prefix that indicates the number of bytes in the value.
        * Stored outside table and away from row. Only address is stored inside table.
    8. LONGTEXT
        * A TEXT column with a maximum length of 4,294,967,295 or 4GB characters.
        * Each LONGTEXT value is stored using a 4-byte length prefix that indicates the number of bytes in the value.
        * Stored outside table and away from row. Only address is stored inside table.
        * Used for only those columns that will be used only for storage and display purpose.
        * It should be used to store remarks, comments, feedback, logs, blogs resume, experience details, moview review etc.
    9. TINYBLOB
        * A BLOB column with a maximum length of 255 bytes.
        * Each TINYBLOB value is stored using a 1-byte length prefix that indicates the number of bytes in the value.
        * Stored outside table and away from row. Only address is stored inside table.
    10. BLOB
        * A BLOB column with a maximum length of 65,535 bytes.
        * Each BLOB value is stored using a 2-byte length prefix that indicates the number of bytes in the value.
        * Stored outside table and away from row. Only address is stored inside table.
    11. MEDIUMBLOB
        * A BLOB column with a maximum length of 16,777,215 bytes.
        * Each MEDIUMBLOB value is stored using a 3-byte length prefix that indicates the number of bytes in the value.
        * Stored outside table and away from row. Only address is stored inside table.
    12. LONGBLOB
        * A BLOB column with a maximum length of 4,294,967,295 or 4GB bytes.
        * Each LONGBLOB value is stored using a 4-byte length
        prefix that indicates the number of bytes in the value.
        * Stored outside table and away from row. Only address is stored inside table.
        * It should be used to store photograph, map, graph, chart, sound, music, video etc.
    13. ENUM
        * An enumeration.
        * Syntax:
            ENUM('value1','value2',...)
        * A string object that can have only one value, chosen
        from the list of values 'value1', 'value2', ..., NULL or the special '' error value. 
        * ENUM values are represented internally as integers.
        * An ENUM column can have a maximum of 65,535 distinct elements.
        * The maximum supported length of an individual ENUM element is M <= 255
        * It requires 1 or 2 bytes, depending on the number of enumeration values.
```sql
CREATE TABLE shirts 
(
    name VARCHAR(40),
    size ENUM('x-small', 'small', 'medium', 'large', 'x-large')
);
INSERT INTO shirts
(name, size)
    VALUES
('dress shirt','large'),
('t-shirt','medium'),
('polo shirt','small');
```
    14. SET
        * A SET is a string object that can have zero or more values, each of which must be chosen from a list of permitted values specified when the table is created. 
        * A SET column can have a maximum of 64 distinct members.
```sql
CREATE TABLE myset (col SET('a', 'b', 'c', 'd'));
INSERT INTO 
myset(col)
VALUES 
('a,d'),
('d,a'),
('a,d,a'),
('a,d,d'),
('d,a,d');
``` 
        * For a value containing more than one SET element, it does not matter what order the elements are listed in when you insert the value. It also does not matter how many times a given element is listed in the value. When the value is retrieved later, each element in the value appears once, with elements listed according to the order in which they were specified at table creation time. 
