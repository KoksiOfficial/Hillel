//Баги:
//  №1: оператор сумування повинен повертати новий об'єкт який 
//      є суммою поточного та rhs. В прикладі повертається та змінюється
//      поточний, що не є вірним.


VeryShort VeryShort::operator+(const VeryShort &rhs)
{
	itsVal += rhs.GetItsVal();
	return *this;
}   
