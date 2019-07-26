package;

import flixel.FlxG;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.tweens.FlxTween;

class MenuState extends FlxState
{
	
// Difficulty Variable
public static var Difficulty:Int;


	override public function create():Void
	{
	
	//  Text variable
	var t:FlxText;

	// Create text with parameters
	t = new FlxText(0,0,FlxG.width,"Rover Roamer");
	t.setFormat(null, 32, FlxColor.WHITE, CENTER, OUTLINE );
	add(t);
	
	t = new FlxText(0, 40, FlxG.width, "Use Left and Right to speed up and slow down");
	t.setFormat(null, 16, FlxColor.WHITE, CENTER, OUTLINE);
	add(t);

	t = new FlxText(0, 60, FlxG.width, "A and D are also usable");
	t.setFormat(null, 16, FlxColor.WHITE, CENTER, OUTLINE);
	add(t);
	
	t = new FlxText(0, 80, FlxG.width, "Hold Space to fly, you fall when you let go!");
	t.setFormat(null, 16, FlxColor.WHITE, CENTER, OUTLINE);
	add(t);

	t = new FlxText(0, 100, FlxG.width, "Game ends if you hit an obstacle");
	t.setFormat(null, 16, FlxColor.WHITE, CENTER, OUTLINE);
	add(t);

	t = new FlxText(0, 120, FlxG.width, "Reach the checkered flag to win");
	t.setFormat(null, 16, FlxColor.WHITE, CENTER, OUTLINE);
	add(t);
	
	t = new FlxText(0, 440, FlxG.width, "Difficulty:");
	t.setFormat(null, 16, FlxColor.WHITE, CENTER, OUTLINE);
	add(t);
	
	t = new FlxText(0, 460, FlxG.width, "E, M, or H for easy, medium or hard game");
	t.setFormat(null, 16, FlxColor.WHITE, CENTER, OUTLINE);
	add(t);		

	}
	override public function update(elapsed:Float):Void 
	{	

		// Start Easy level
		if (FlxG.keys.pressed.E)
		{
			Difficulty = 1;
			FlxG.switchState(new PlayState());
		}

		// Start Medium level
		if (FlxG.keys.pressed.M)
		{
			Difficulty = 2;
			FlxG.switchState(new PlayState());
		}
		// Start Hard level
		if (FlxG.keys.pressed.H)
		{
			Difficulty = 3;
			FlxG.switchState(new PlayState());
		}

	}
}
