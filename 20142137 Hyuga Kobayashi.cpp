#include<iostream>
#include<string>
#include<fstream>
#include<algorithm>
#include<vector>
using namespace std;

class Ace {
private:
	string Pitcher;
	int Speed;
	int Rotation;
	int Ball;
public:
	void setPitcher(const string& ace) { Pitcher = ace; }
	string getPitcher() { return Pitcher; }
	void setSpeed(int sNum) { Speed = sNum; }
	int getSpeed()const { return Speed; }
	void setRotation(int rNum) { Rotation = rNum; }
	int getRotation() { return Rotation; }
	void setBall(int bNum) { Ball = bNum; }
	int getBall() { return Ball; }
};

bool Ituzai(const Ace& x, const Ace& y) {
	return x.getSpeed() > y.getSpeed();
}
int main() {
	ifstream infile("P1.txt");
	if (!infile) {
		cout << "  •\Ž¦‚Å‚«‚Ü‚¹‚ñ\n ";
	}
	else {
		vector<Ace>v1;
		string p;
		int s;
		int r;
		int b;

		int i = 0;
		while(infile>>p>>s>>r>>b){
			v1.emplace_back();
			v1[i].setPitcher(p);
			v1[i].setSpeed(s);
			v1[i].setRotation(r);
			v1[i].setBall(b);
			i++;
		}
		sort(v1.begin(), v1.end(), Ituzai);
		for (auto &V : v1) {
			cout << V.getPitcher() << "@‹…‘¬" << V.getSpeed() << "‡q " << V.getRotation() << "‰ñ“] " << V.getBall() << "‹…–Ú" << endl;

		}
	}
}