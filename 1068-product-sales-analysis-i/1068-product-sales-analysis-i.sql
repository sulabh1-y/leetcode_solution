select Sales.year ,Sales.price, Product.product_name
from Sales inner join Product on Sales.product_id=Product.product_id