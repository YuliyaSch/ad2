// ad2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
/*
#include <iostream>
#include <string>

using namespace std;
//creating the initial MediaPlayer
class MediaPlayer {
public:
	virtual void play(string file_type, string file_name) = 0;
	MediaPlayer() {} //virtual ~
};
//creating the AdvancedMediaPlayer
//to be able to read

class AdvancedMediaPlayer {
public:
	AdvancedMediaPlayer() {}
	virtual void playVLC(string file_name) = 0; 
	virtual void playMP3(string file_name) = 0;
	virtual void playMP4(string file_name) = 0;
	virtual void playWAV(string file_name) = 0;

	AdvancedMediaPlayer() {} //virtual ~
};
//VLCPlayer class
class VLCPlayer : public AdvancedMediaPlayer {
public:
	void playVLC(string file_name) {
		cout << "Playing VLC file. Name: " << file_name << "\n";
	}
	void playMP3(string file_name) {
		cout << "Playing MP3 file. Name: " << file_name << "\n";
	}
	void playMP4(string file_name) {
		cout << "Playing MP4 file. Name: " << file_name << "\n";
	}
	void playWAV(string file_name) {
		cout << "Playing WAV file. Name: " << file_name << "\n";
	}

	~VLCPlayer() {}
};
//MP3Player class
class MP3Player : public AdvancedMediaPlayer {
public:
	void playMP3(string file_name) {
		cout << "Playing MP3 file. Name: " << file_name << "\n";
	}
	void playMP4(string file_name) {
		cout << "Playing MP4 file. Name: " << file_name << "\n";
	}
	void playVLC(string file_name) {
		cout << "Playing VLC file. Name: " << file_name << "\n";
	}
	void playWAV(string file_name) {
		cout << "Playing WAV file. Name: " << file_name << "\n";
	}

	MP3Player() {}
};
//MP4Player class
class MP4Player : public AdvancedMediaPlayer {
public:
	void playMP4(string file_name) {
		cout << "Playing MP4 file. Name: " << file_name << "\n";
	}
	void playMP3(string file_name) {
		cout << "Playing MP3 file. Name: " << file_name << "\n";
	}
	void playVLC(string file_name) {
		cout << "Playing VLC file. Name: " << file_name << "\n";
	}
	void playWAV(string file_name) {
		cout << "Playing WAV file. Name: " << file_name << "\n";
	}

	MP4Player() {}
};
//WAVPlayer class
class WAVPlayer : public AdvancedMediaPlayer {
public:
	void playWAV(string file_name) {
		cout << "Playing WAV file. Name: " << file_name << "\n";
	}
	void playMP3(string file_name) {
		cout << "Playing MP3 file. Name: " << file_name << "\n";
	}
	void playMP4(string file_name) {
		cout << "Playing MP4 file. Name: " << file_name << "\n";
	}
	void playVLC(string file_name) {
		cout << "Playing VLC file. Name: " << file_name << "\n";
	}

	WAVPlayer() {}
};

//the media adapter
class MediaAdapter : public MediaPlayer {
	AdvancedMediaPlayer* advancedMusicPlayer;

public:
	MediaAdapter(string file_type) {
		if (file_type.compare("vlc") == 0) {
			advancedMusicPlayer = new VLCPlayer;
		}
		else if (file_type.compare("mp3") == 0) {
			advancedMusicPlayer = new MP3Player;
		}
		else if (file_type.compare("mp4") == 0) {
			advancedMusicPlayer = new MP4Player;
		}
		else if (file_type.compare("wav") == 0) {
			advancedMusicPlayer = new WAVPlayer;
		}
	}

	void play(string file_type, string file_name) {
		if (file_type.compare("vlc") == 0) {
			advancedMusicPlayer->playVLC(file_name);
		}
		else if (file_type.compare("mp3") == 0) {
			advancedMusicPlayer->playMP3(file_name);
		}
		else if (file_type.compare("mp4") == 0) {
			advancedMusicPlayer->playMP4(file_name);
		}
		else if (file_type.compare("wav") == 0) {
			advancedMusicPlayer->playWAV(file_name);
		}
	}

	MediaAdapter() {
		delete advancedMusicPlayer;
	}
};

class AudioPlayer : public MediaPlayer {
	MediaAdapter* mediaAdapter;

public:
	void play(string file_type, string file_name) {
		// inbuilt support to play mp3 music files
		if (file_type.compare("mp3") == 0) {
			cout << "Playing MP3 file. Name: " << file_name << "\n";
		}
		else if (
			file_type.compare("vlc") == 0 ||
			file_type.compare("mp4") == 0 || file_type.compare("wav") == 0) {
			mediaAdapter = new MediaAdapter(file_type);
			mediaAdapter->play(file_type, file_name);
			delete mediaAdapter;
		}
		else {
			cout << "Invalid media. " << file_type;
			cout << " format not supported";
			cout << "\n";
		}
	}
};
//main
int main() {
	AudioPlayer audioPlayer;

	audioPlayer.play("mp3", "beyond_the_horizon.mp3");
	audioPlayer.play("mp4", "alone.mp4");
	audioPlayer.play("vlc", "far_far_away.vlc");
	audioPlayer.play("wav", "stronger.wav");
	audioPlayer.play("avi", "mind_me.avi");
}

*/


//------------------------------------------------------------------------------------------------------------------------------------------------------





/*
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.


#include<iostream>
#include<string>

using namespace std;

//Problem: client want to control the fan and we have 2 ways to access the fan

// The existing class with a compatible interface
class fan {
protected:
	int lv;
	string turn;
public:
	virtual void remote() = 0;
	virtual void chooseLv() = 0;
};

// Interface for the Adapter
class adapterFan : public fan {
public:
	void remote() {
		cout << "Turn on/off: ";
		cin.ignore();
		getline(cin, turn);
		if (turn == "off") {
			lv = 0;
			return;
		}
		else
			chooseLv();
	}
	void chooseLv() {
		cout << "Pick level: ";
		cin >> lv;
		cout << "\n";
	}
	virtual void control() = 0;
	virtual ~adapterFan() = default;
};

// Bluetooth Adapter
class bluetoothAdapter : public adapterFan {
public:
	void control() override {
		cout << "Successful connection by Bluetooth!\n";
		remote();
	}
};

// Wifi Adapter
class wifiAdapter : public adapterFan {
public:
	void control() override {
		cout << "Successful connection by Wifi!\n";
		remote();
	}
};

int main() {
	// Using the Bluetooth adapter
	adapterFan* bluetoothFan = new bluetoothAdapter();
	bluetoothFan->control();
	delete bluetoothFan;

	// Using the Wifi adapter
	adapterFan* wifiFan = new wifiAdapter();
	wifiFan->control();
	delete wifiFan;

	return 0;
}
*/




//------------------------------------------------------------------------------------------------------------------------------------------------


#include<iostream>
#include<string>


using namespace std;

class   NewPlayer { //El cliente quiere utilizar este Objeto  Клиент хочет использовать этот объект
public:
	virtual void Play() = 0;	//Это функция, которую клиент хочет использовать
};

class OldPlayer { //Este es el reproductor que tenemos.  Это тот плеер, который у нас есть.
	string songname;
public:
	OldPlayer(string songN) :songname(songN) {}

	void OldPl(int volume)	//Esta es la función que tenemos  Это функция, которую мы имеем
	{
		cout << "\n Название песни: " << songname << " громкость :" << volume << "\n";
	}
};

class Adapter : public NewPlayer, private OldPlayer {

	int vol;

public:
	Adapter(string songN, int volumen) :vol(volumen), OldPlayer(songN) {}
	void Play() {		//Viene de la herencia publica  Это происходит из общественного наследия
		OldPl(vol);	//Viene de la herencia privada  Происходит от частного наследования
	}
};

int main() {
	setlocale(LC_ALL, "Russian");
	NewPlayer* music = new Adapter("Zombie", 75);
	music->Play();
	cout << "\n";               // La llamada a la función de la interfaz es guiada por el adaptador al código heredado  
	delete music;          //Вызов функции интерфейса выполняется адаптером к устаревшему коду
	return 0;
}
