// У цій програмі нема багів, але він є нелогічним, так як цико while не буде жодного
// разу проітерований через його умову

int counter = 100;
while (counter < 10)
{
    cout << "counter now: " << counter;
    counter--;
}
