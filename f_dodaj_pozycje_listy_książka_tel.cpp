void dodaj_pozycje (const string& s)
{
	typedef list<Pozycja>::const_iterator LI;
	for (LI i=książka_tel.begin(); i!=książka_tel.end(); ++i){
		const Pozycja& p = *i;
		if (s==p.nazwisko){
			cout << p.nazwisko << ' ' << p.numer << '\n';
			return;
		}
	}
}