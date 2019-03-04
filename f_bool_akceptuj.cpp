bool akceptuj ()
{
	cout << "Czy chcesz kontynuować? \n";
	char odpowiedź = 0;
	cin >> odpowiedź;

	switch (odpowiedź){
	case 't':
			return true;

	case 'n':
			return false;

	default:
			cout << "Tę odpowiedź traktuję jako nie. \n";
	}
}