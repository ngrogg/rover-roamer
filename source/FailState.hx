package;

import flixel.FlxG;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.tweens.FlxTween;

class FailState extends FlxState
{
	override public function create():Void
	{
	
	// Title text
	var t:FlxText;

	t = new FlxText(0,0,FlxG.width,"UH OH! Try Again...");
	t.setFormat(null, 32, FlxColor.WHITE, CENTER, OUTLINE );
	add(t);
	
	t = new FlxText(0, 40, FlxG.width, "Use Left and Right to speed up and slow down");
	t.setFormat(null, 16, FlxColor.WHITE, CENTER, OUTLINE);
	add(t);

	t = new FlxText(0, 60, FlxG.width, "A and D are also usable");
	t.setFormat(null, 16, FlxColor.WHITE, CENTER, OUTLINE);
	add(t);

	t = new FlxText(0, 80, FlxG.width, "Game ends if you hit an obstacle");
	t.setFormat(null, 16, FlxColor.WHITE, CENTER, OUTLINE);
	add(t);

	t = new FlxText(0, 100, FlxG.width, "Reach the checkered flag to win");
	t.setFormat(null, 16, FlxColor.WHITE, CENTER, OUTLINE);
	add(t);
	
	t = new FlxText(0, 460, FlxG.width, "Press E to return to menu");
	t.setFormat(null, 16, FlxColor.WHITE, CENTER, OUTLINE);
	add(t);	
	}

	override public function update(elapsed:Float):Void 
	{	
		// Return to menu
		if (FlxG.keys.pressed.E)
		{
			FlxG.switchState(new MenuState());
		}
	}
}
