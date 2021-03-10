# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|H_01         |input taken in switch to select arithmetic                    | 1,1+2      |      3      |      3         |Requirement based |                 
|H_02         |input taken a string in switch                                | a,1+3      | error       |     error      |scenario based    |        
|H_03         |input taken more than 5                                       | 6,2-4      |invalid      |   invalid      |boundary based    |  
|  H_02       |Input taken as a string for conversion| abdch |invalid input|invalid input|Scenario based |
|  H_02       |input taken as degree|  90 |1.5708|1.5708|Scenario based    |Scenario passed|
|  H_02       |Input taken as radian|  |3.14|180|180| Boundary based    |
|  H_02       |integer taken as whole number will give output as whole number| 9  |square=81|81|Requirement based |
|  H_02       |Integer taken as negative number will give output as negative whole number or zero| -11|cube =-1331|-1331|Scenario based    |
|  H_02       |Input taken as boundary exceeding integer|sqrt(100000000000) |3468.7 | overflow in implicit |Boundary based    |
|H_03|Integer is taken for the function selection|1,7|154|154|Requirement Based|
|H_03|Integr is taken for the function selction (other than number)|Ar|Invalid|Invalid|Scenatio based|
|H_03|Integer is taken for function seletion other than given function|3|Invalid|Invalid|Boundry Based|



## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |input given to sring                                          |    6        |invalid input|invalid input  |Requirement based |
|  L_02       |input taken char for addition                                 |   a+b       |error        |error          |  Scenario based  |
|  L_03       |input taken int for addition                                  |    2+4      |6            |6              |Boundary based    |
|  L_03       |input taken int for addition                                  |    2+4      |6            |6              |Boundary based    |
|  L_04       |input taken more that double                                  |999999999    |garbage value|garbage value  |Boundary based    |
|  L_04       |Input taken as float for radian|  3.141|180|180|Requirement based |
|  L_05       |Input taken as 360 for degree| 360  |6.2839|6.2839|boundary based based    |
|  L_06       |Input taken as whole numbers to find square | 4 |16 | 16 |Requirement based    |
|  L_06      | Input taken as negative number to find square|  121| -11| 121|Scenario based |
|  L_06       |Input taken as boundary exceeding integer|100000000  | 10000000000000000| overflow in implicit|Boundary based based    |
|  L_07       |Input taken as whole number to find cube| 3|27|27|Requirement based    |
|  L_07       |Input taken as negative number to find cube|  -29|-729|-729|Scenario Based    |
|  L_07       |   Input taken as boundary exceeding integer           | 10000000  |10^3 |overflow in implicit |Boundary based    |
|  L_08       |Input taken as whole number to find square root| 81|9|29|Requirement based    |
|  L_08       |Input taken as negative number to find square root|  -15|invalid|invalid|Scenario Based    |
|  L_08       |Input taken as boundary exceeding integer|  100000000000 |3468.7 | overflow in implicit |Boundary based    |
|  L_09       |Input taken as whole number to find cube root| 81|9|29|Requirement based    |
|  L_09       |Input taken as negative number to find cube root|  -15|invalid|invalid|Scenario Based    |
|  L_09       |input taken as boundary exceeding integer|10000000000   |1131.36 |overflow in implicit|Boundary based    |
|  L_10       |Input taken as whole number to find factorial| 5|120|120|Requirement based    |
|  L_10       |Input taken as negative number to find factorial |  -13|invalid|invalid|Scenario Based    |
|  L_10       | Input taken as boundary exceeding integer | 72  | 6.123446e+103| 0 |Boundary based    |
|L_11|Input is taken as a to select the function then the radius data is taken|7|154|153.9|Requirement Based|
|L_11|Input taken for the area of the circle|-7|153.9|Invlaid Input |Scenario Based|
|L_11|Input taken for the area of the circle|100000000000000|31400000000000000000000|Infy|Boundry Based
|L_12|Input is taken for the polar coordinate and converted into the Cartesian |7,10|6.849,1.215|6.849,1.215|Requirement Based|
|L_12| Input is taken for the polar coordinate and converted into the Cartesian (negative number) |-10, -180|10,0.006|10,0.006|Scenario Based|
|L_12| Input is taken for the polar coordinate and converted into the Cartesian |100000000000000,10000000000000|220054504836431872.000, -975487540796588032.000|22124212231153.000, -554334434664434343334434|Boundry Based|
