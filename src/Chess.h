#pragma once
class Chess
{
public:
	Chess();

	enum PieceType
	{
	  BLACK=1,
	  WHITE=-1,
	  EMPTY=0
  };
	enum Direction
	{
	  COL=1,
	  ROW=2,
	  LEFT_RIGHT=3,
	  RIGHT_LEFT
  };

	static const int SIZE = 15;

  PieceType get_player_type();
	void set_point(int x, int y, PieceType value);
	PieceType get_point(int x, int y);
	int judge(int x, int y, Direction dire);          //1代表左右，2代表上下，3代表左上到右下，4代表右上到左下
private:
	PieceType chess_array_[SIZE] [SIZE];
};
