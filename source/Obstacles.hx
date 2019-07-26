package;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.animation.FlxAnimation;
import flixel.math.FlxRandom;
import flixel.util.FlxSpriteUtil;
import flixel.math.FlxVelocity;
import flixel.math.FlxPoint;


class Obstacles extends FlxSprite
{

	public function new() 
	{
		super();
	}

	public function init(X:Int = 0, Y:Int = 0, VelocityX:Float = 0, VelocityY:Float = 0):Obstacles
	{
		var spriteNum = FlxG.random.int(1,6);
		if(spriteNum >= 4)
		{
			loadGraphic("assets/asteroid.png");
			setGraphicSize(20,20);
			updateHitbox();
		}
		if(spriteNum == 3)
		{
			loadGraphic("assets/alienRover.png");
			setGraphicSize(20,20);
			updateHitbox();
		}
		if(spriteNum == 2)
		{
			loadGraphic("assets/alien.png");
			setGraphicSize(20,20);
			updateHitbox();
		}
		if(spriteNum == 1)
		{
			loadGraphic("assets/bug.png");
			setGraphicSize(20,20);
			updateHitbox();
		}

		// Position stuff, narrower margin for harder difficulty
		if(MenuState.Difficulty == 3)
		{
			if (spriteNum <= 3)
			{
				// Position stats for ground obstacles
				x = FlxG.width / 4 + FlxG.random.int(0,400);
				y = 356;
			}

			// Position stats for Asteroids
			else
			{
				x = FlxG.width / 2 + FlxG.random.int(0,200);
				y = 0; //FlxG.height / 4 + FlxG.random.int(0,100);
			}
		}
		else
		{
			if (spriteNum <= 3)
			{
				// Position stats for ground obstacles
				x = FlxG.width / 2 + FlxG.random.int(0,100);
				y = 356;
			}
			
			// Position stats for Asteroids
			else
			{
				x = FlxG.width / 2 + FlxG.random.int(0,100);
				y = 0; //FlxG.height / 2 + FlxG.random.int(0,100);
			}
		}
		
		// Velocity stuff

		// If easy mode
		if(MenuState.Difficulty == 1)
		{ 
			// Direction for Ground obstacles
			if (spriteNum <= 3)
			{		
				velocity.x = FlxG.random.int(-25,-75);
				velocity.y = 0;
			}

			// Direction for Asteroids
			else
			{
				velocity.x = FlxG.random.int(-25,-75);
				velocity.y = FlxG.random.int(25,75);
			}
		}
		// If medium mode		
		if(MenuState.Difficulty == 2)
		{ 
			// Direction for Ground obstacles
			if (spriteNum <= 3)
			{
				velocity.x = FlxG.random.int(-50,-100);
				velocity.y = 0;
			}

			// Direction for Asteroids
			else
			{
				velocity.x = FlxG.random.int(-50,-100);
				velocity.y = FlxG.random.int(50,100);
			}
		}

		// if hard mode
		if(MenuState.Difficulty == 3)
		{ 
			// Direction for Ground Obstacles
			if (spriteNum <= 3)
			{
				velocity.x = FlxG.random.int(-200,-75);
				velocity.y = 0;
			}

			// Direction for Asteroids
			else
			{
				velocity.x = FlxG.random.int(-200,-100);
				velocity.y = FlxG.random.int(200,100);
			}
		}

		return this;
	}	
}
