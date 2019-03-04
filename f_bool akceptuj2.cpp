bool akceptuj2 (){
	int liczba_prób = 1;
	while (liczba_prób < 4){
		cout << "Czy chcesz kontynuować (t czy n)? \n";
		char odpowiedź = 0;
		cin >> odpowiedź;

		switch (odpowiedź){
		case 't':
				return true;
		case 'n':
				return false;
		default:
				cout << "Przepraszam, nie rozumiem tej odpowiedzi. \n";
				liczba_prób = liczba_prób + 1;
		}
	}
    cout << "Tę odpowiedź traktuję jako nie. \n";
	return false;
}
