// Помилка №1: itsStation є приватним членом класу TV, тож для доступу
// ми маємо використати метод GetStation(), а не звиртатись на пряму myTV.itsStation

// Помилка №2: сласс TV не є статичний, тож ми маємо звертатись до методів класу через
// екземпляр myTV.SetStation(9), а не TV.SetStation(10);

// Помилка №3: у оголошенні класу нема контсруктора, що приймає значення, тому
// рядок TV myOtherTV(2); є невірним, слід скористатись методами доступу

class TV
{
public:
    void SetStation(int Station);
    int GetStation() const;

private:
    int itsStation;
};
main()
{
    TV myTV;
    myTV.itsStation = 9;
    TV.SetStation(10);
    TV myOtherTV(2);
}
