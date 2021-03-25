# Reto_Firmware_qBOX
Reto técnico para puesto de Firmware qBOX

Una expresión aritmética puede expresarse en diversas notaciones, siendo las más común de todas la notación inﬁja. En la notación inﬁja, el operador se coloca entre los dos operando, como por ejemplo en la operación "5 + 6". Pero existen otras dos notaciones que también se pueden usar, entre ellas podemos mencionar a la notación preﬁja y la notación postﬁja. En la notación preﬁja, el operador se coloca antes de los operandos, como por ejemplo en la operacion "+5 6". Y en la notación postﬁja, el operador se coloca después de los operando, como por ejemplo en la operacion "5 6 +".

Se desea elaborar un programa en ANSI C que permita leer una operación aritmética en cualquier notación. Para ello deberá considerar que:

• Las operaciones aritméticas que podrá reconocer serán la suma, la resta, la multiplicación y la división real. El símbolo que se usará para la suma será "+", el símbolo para la resta será "-", el símbolo para la multiplicación será "*" y el símbolo para la división real será "/".

• Los operandos a leer serán números de solamente una cifra.

• El usuario podrá ingresar la operación aritmética usando la notación inﬁja, la notación preﬁja así como la notación postﬁja.

• Entre los operandos y el operador podrá existir espacios en blanco los cuales el programa deberá desconsiderar.

Luego de leer la operación aritmética, deberá de reconocer qué tipo de notación es, ejecutar la operación y presentar el resultado. En caso la operación ingresada no se encuentre expresada en las notaciones antes mencionadas, se deberá imprimir el mensaje La operación no es infija, prefija ni postfija.

Cuando se tenga una operación de división real, cuando el segundo operando es cero, deberá imprimir el mensaje "No se puede dividir entre cero" pues no podrá realizar la operación.

A continuación se presentan algunos casos de prueba: 

Caso de prueba 1:
```
Ingrese operación: 5+6
El resultado es 11.000000
```
Caso de prueba 2:
```
Ingrese operación: 5 + 6
El resultado es 11.000000
```
Caso de prueba 3:
```
Ingrese operación: -78
El resultado es -1.000000
```
Caso de prueba 4:
```
Ingrese operación: *2 3
El resultado es 6.000000
```
Caso de prueba 5:
```
Ingrese operación: 5 7 /
El resultado es 0.714286
```
Caso de prueba 6:
```
Ingrese operación: 60/
No se puede dividir entre cero
```
Caso de prueba 7:
```
Ingrese operación: 5++
La operación no es infija, prefija ni postfija
```

### Pasos a seguir:

1- Forkear el repositorio

2- Resolver el reto en su computadora de forma local

3- Subir el desarrollo en la cuenta desde la que forkearon

4- Enviarnos la url del repositorio publico

### Tiempo de desarrollo: 2 horas
