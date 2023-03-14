     {
                wynik = (int(liczba[i]) - 48) * 10;
                wynik += int(liczba[i+1] - 48);
                
                if(wynik>=65 && wynik <=90)
                    haslo += char(wynik);
                //cout << char(wynik);

                if(wynik == 88)
                    licznik_x++;
                
                if(licznik_x == 1)
                {
                    //cout << haslo;
                    return 0;
                }
            }