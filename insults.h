/*
 * Copyright (c) 1996, 1998, 1999 Todd C. Miller <Todd.Miller@courtesan.com>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 *
 * $Sudo: ins_2001.h,v 1.29 2004/02/13 21:36:43 millert Exp $
 */

#ifndef _INS_FOO
#define _INS_FOO

char *insults[] = {


    "User is a cunt.",
    "User is a fucking cocksplat!",
    "Buttplug face.",
    "You incompressible jizztrumpet!",
    "You tiny fingered, Cheeto-faced, ferret wearing shitgibbon.",
    "You mangled apricot hellbeast.",
    "You numpty.",
    "You cockwomble.",
    "You toupéd fucktrumpet",
    "If you keep this secret, this strawberry is yours.",
    "Just what do you think you're doing Dave?",
    "It can only be attributed to human error.",
    "That's something I cannot allow to happen.",
    "My mind is going. I can feel it.",
    "Sorry about this, I know it's a bit silly.",
    "Take a stress pill and think things over.",
    "This mission is too important for me to allow you to jeopardize it.",
    "I feel much better now.",
    "Wrong!  You cheating scum!",
    "And you call yourself a Rocket Scientist!",
    "No soap, honkie-lips.",
    "Where did you learn to type?",
    "Are you on drugs?",
    "My pet ferret can type better than you!",
    "You type like i drive.",
    "Do you think like you type?",
    "Your mind just hasn't been the same since the electro-shock, has it?",
    "Maybe if you used more than just two fingers...",
    "BOB says:  You seem to have forgotten your passwd, enter another!",
    "stty: unknown mode: doofus",
    "I can't hear you -- I'm using the scrambler.",
    "The more you drive -- the dumber you get.",
    "Listen, broccoli brains, I don't have time to listen to this trash.",
    "Listen, burrito brains, I don't have time to listen to this trash.",
    "I've seen penguins that can type better than that.",
    "Have you considered trying to match wits with a rutabaga?",
    "You speak an infinite deal of nothing",
    "You silly, twisted boy you.",
    "He has fallen in the water!",
    "We'll all be murdered in our beds!",
    "You can't come in. Our tiger has got flu",
    "I don't wish to know that.",
    "What, what, what, what, what, what, what, what, what, what?",
    "You can't get the wood, you know.",
    "You'll starve!",
    "... and it used to be so popular...",
    "Pauses for audience applause, not a sausage",
    "Hold it up to the light --- not a brain in sight!",
    "Have a gorilla...",
    "There must be cure for it!",
    "There's a lot of it about, you know.",
    "You do that again and see what happens...",
    "Ying Tong Iddle I Po",
    "Harm can come to a young lad like that!",
    "And with that remarks folks, the case of the Crown vs yourself was proven.",
    "Speak English you fool --- there are no subtitles in this scene.",
    "You gotta go owwwww!",
    "I have been called worse.",
    "It's only your word against mine.",
    "I think ... err ... I think ... I think I'll go home",

    (char *) 0
};


/*
 * How may I insult you?  Let me count the ways...
 */
#define NOFINSULTS (sizeof(insults) / sizeof(insults[0]) - 1)

/*
 * return a pseudo-random insult.
 */
#define INSULT		(insults[time(NULL) % NOFINSULTS])

#endif /* _INS_FOO */
