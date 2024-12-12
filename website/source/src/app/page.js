export default () => {
  return (
    <>
      <main className="flex flex-col justify-center items-center min-h-screen space-y-4 max-w-lg mx-auto text-justify text-xl">
        <div>
          <img src="/phoenix-legion-logo_tight.png" className="h-24" />
        </div>
        <h1 className="text-4xl font-bold">Phoenix Legion</h1>
        <p>
          We're an Arma 3 community dedicated to providing high-quality
          cooperative experiences that focus on player enjoyability above all
          else.
        </p>
        <p>
          Our action-packed missions are filled with intense and cinematic
          moments in which you'll overcome immense odds while fuelling an
          overarching lore.
        </p>
        <p>
          If that sounds fun, <u>we want you</u>! Join our Discord, grab the
          "Phoenix Legion" role, and introduce yourself in the "the-mess"
          channel to get started. We're looking forward to fighting alongside
          you.
        </p>
        <div className="space-x-2 pt-2">
          <a
            className="bg-[#5865F2] text-white p-2 hover:font-bold"
            href="https://unnamed.group/discord"
            target="_blank"
          >
            Discord
          </a>
          <a
            className="bg-[#78A948] text-white p-2 hover:font-bold"
            href="https://units.arma3.com/unit/phoenix-legion"
            target="_blank"
          >
            Unit Page
          </a>
        </div>
      </main>
    </>
  );
};
