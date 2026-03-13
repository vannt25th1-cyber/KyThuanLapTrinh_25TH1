#pragma once

void AddPerson(vector<Person>& p) {
	Person a;
	cout << "+Id: ";
	cin >> a.id;
	cout << "+Name: ";
	cin.ignore();
	getline(cin, a.name);
	cout << "+ Age: ";
	cin >> a.age;
	cout << "+ Address: ";
	cin.ignore();
	getline(cin, a.address);
	p.push_back(a);
	cout << "Add a person successfully" << endl;


}
