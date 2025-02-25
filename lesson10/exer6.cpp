//Баги: 
//  №1: нема перевірки на однаковість об'єкту this та rhs
//  №2: можна оптимізувати код повертаючи посилання на об'єкт (SQUARE &)
//      таким чином не буде створенна додаткова копія при поверненні з методу


SQUARE SQUARE::operator=(const SQUARE &rhs)
{
	itsSide = new int;
	*itsSide = rhs.GetSide();
	return *this:
}   
