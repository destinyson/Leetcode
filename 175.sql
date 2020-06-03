/**************************************175 - 组合两个表*************************************

表1: Person

+-------------+---------+
| 列名         | 类型     |
+-------------+---------+
| PersonId    | int     |
| FirstName   | varchar |
| LastName    | varchar |
+-------------+---------+
PersonId 是上表主键

表2: Address

+-------------+---------+
| 列名         | 类型    |
+-------------+---------+
| AddressId   | int     |
| PersonId    | int     |
| City        | varchar |
| State       | varchar |
+-------------+---------+
AddressId 是上表主键

编写一个 SQL 查询，满足条件：无论 person 是否有地址信息，都需要基于上述两表提供 person 的以下信息：

FirstName, LastName, City, State
*****************************************************************************************************/

-- 由于题目要求无论Person是否有地址信息，都需要基于两表提供Person的信息

-- 因此可理解为Person表的信息必须保留，Address可以置NULL，因此为左外连接

select Person.FirstName, Person.LastName, Address.City, Address.State
from Person left outer join Address
on Person.PersonId = Address.PersonId