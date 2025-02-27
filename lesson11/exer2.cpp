//Баги: 
//  №1: поінтер pRect ніколи не звільнюється
//  №2: SomeFunction приймає об'єкт типу Shape,
//      коли має приймати посилання &Shape, бо в даному
//      варіанті буде викликан звичайний коструктор копіювальник
//      і до функції передасться Shape, а не Rectangle
void SomeFunction(Shape);
Shape *pRect = new Rectangle;
SomeFunction(*pRect);


