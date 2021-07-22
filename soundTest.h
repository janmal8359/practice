#pragma once
#include "gameNode.h"
#include "progressBar.h"

#define BUTTONMAX 14
#define MUSICMAX 5

enum music
{
	ù��,
	�츮����ѵ���,
	�ѿ������ǲ�,
	����,
	����
};

struct UI
{
	image* img;
	RECT rc;
};

class soundTest : public gameNode
{
private:

	bool _isShuffle;
	bool _isPlay;
	bool _isPlaying;
	bool _isLoop;

	int _listNum;
	int _lastNum;
	int _nextNum;

	unsigned int _totalTime;
	unsigned int _currentTime;

	image* _album[MUSICMAX];
	UI _button[BUTTONMAX];
	music _name;

	string _music[MUSICMAX];
	float _volume;

	progressBar* _volumeBar;
	progressBar* _timeBar;


public:
	soundTest();
	~soundTest();

	virtual HRESULT init();			//�ʱ�ȭ �Լ�
	virtual void release();			//�޸� ���� �Խ�
	virtual void update();			//�����ϴ� �Լ�
	virtual void render();			//�׸��� �Լ�

	void setImage();
	void renderImage();
	void makeRect();
	void collision();
	void selectMusic();
	void setXY(image* img, float x, float y);

	// function
	void Play();
	void Pause();
	void Next();
	void Back();
	void Shuffle();
	void Loop();
	void setVolume();
	void setTime();
	void ChangeAlbum();
	void changeButton();
	void nextMusic();

};

