#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static const char *quotes[] = {
    "riverrun, past Eve and Adam's, from swerve of shore to bend of bay, brings us by a commodius vicus of recirculation back to Howth Castle and Environs.",

    "bababadalgharaghtakamminarronnkonnbronntonnerronntuonnthunntrovarrhounawnskawntoohoohoordenenthurnuk!",

    "In the name of Annah the Allmaziful, the Everliving, the Bringer of Plurabilities, haloed be her eve, her singtime sung, her rill be run, unhemmed as it is uneven!",

    "They lived and laughed and loved and left.",

    "First we feel. Then we fall.",

    "Three quarks for Muster Mark!",

    "Sleep, where in the waste is the wisdom?",

    "Be sage about sausages!",

    "A way a lone a last a loved a long the",

    "Lord, heap miseries upon us yet entwine our arts with laughters low.",

    "Let us leave theories there and return to here's hear.",

    "And you'll miss me more as the narrowing weeks wing by. Someday duly, oneday truly, twosday newly, till whensday.",

    "..they were yung and easily freudened..",

    "The Gracehoper was always jigging ajog, hoppy on akkant of his joyicity.",

    "We'll meet again, we'll part once more.",

    "Thus the unfacts, did we possess them, are too imprecisely few to warrant our certitude...",

    "He is cured by faith who is sick of fate.",

    "over the bowls of memory where every hollow holds a hallow",

    "Phall if you but will, rise you must.",

    "Hohohoho, Mister Finn, you're going to be Mister Finnagain! Comeday morm and, O, you're vine! Sendday's eve and, ah you're vinegar! Hahahaha, Mister Funn, you're going to be fined again!",

    "Anna was, Livia is, Plurabelle's to be.",

    "Begin to forget it. It will remember itself from every sides, with all gestures in each our word. Today's truth, tomorrow's trend.",

    "So. Avelaval. My leaves have drifted from me. All. But one clings still. I'll bear it on me. To remind me of. Lff!",

    "Tell me, tell me, tell me, elm! Night night! Telmetale of stem or stone. Beside the rivering waters of, hitherandthithering waters of. Night!",

    "It darkles, (tinct, tint) all this our funnaminal world.",

    "Knock knock. War's where! Which war? The Twwinns. Knock knock. Woos without! Without what? An apple. Knock knock.",

    "For all their faults. I am passing out. O bitter ending! I'll slip away before they're up. They'll never see. Nor know. Nor miss me.",

    "In the ignorance that implies the impression that knits knowledge that finds the nameform that whets the wits that convey contacts that sweeten sensation that drives desire that adheres to attachment that dogs death that bitches birth that entails the ensuance of existentiality.",

    "Ireland sober is Ireland stiff.",

    "ere the hour of the twattering of bards in the twitterlitter between Druidia and the Deepsleep Sea",

    "I done me best when I was let. Thinking always if I go all goes. A hundred cares, a tithe of troubles and is there one who understands me? One in a thousand of years of the nights?",

    "the beauchamp, byward, bull and lion, the white, the wardrobe",

    "Wonderlawn's lost us for ever. Alis, alas, she broke the glass! Liddell lokker through the leafery, ours is mistery of pain.",

    "(Stoop) if you are abcedminded, to this claybook, what curios of sings (please stoop), in this allaphbed! Can you rede its world?",

    "Life, he himself said, is a wake, livit or krikit, and on the bunk of our bread-winning lies the cropse of our seedfather.",

    "Wait till the honeying of the lune, love! Die eve, little eve, die! We see that wonder in your eye.",

    "Here Comes Everybody.",

    "Quoiquoiquoiquoiquoiquoiquoiq!",

    "So weenybeenyveenyteeny.",

    "Broken Eggs will poursuive bitten Apples for where theirs is Will there's his Wall.",

    "My chart shines high where the blue milk's upset.",

    "Grace before Glutton. For what we are, gifs a gross if we are, about to believe.",

    "Never back a woman you defend, never get quit of a friend on whom you depend, never make face to a foe till he's rife and never get stuck to another man's pfife.",

    "We who live under heaven, we of the clovery kindgom, we middlesins people have often watched the sky overreaching the land.",

    "Stand forth, come boldly, jolly me, move me, zwilling though I am, to laughter in your true colours.",

    "Answer: They war loving, they love laughing, they laugh weeping, they weep smelling, they smell smiling, they smile hating, they hate thinking, they think feeling, they feel tempting, they tempt daring, they dare waiting.",
};

int main(void) {
    int n = sizeof(quotes) / sizeof(quotes[0]);
    srand((unsigned int)time(NULL));
    printf("%s\n", quotes[rand() % n]);
    return 0;
}
