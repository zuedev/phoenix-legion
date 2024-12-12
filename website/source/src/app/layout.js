import "./globals.css";

import localFont from "next/font/local";

const mainFont = localFont({
  src: "./fonts/DepartureMono-Regular.woff2",
});

export const metadata = {
  title: "Phoenix Legion",
  icons: {
    icon: "/phoenix-legion-logo_tight.png",
  },
};

export const viewport = {
  width: "device-width",
  initialScale: 1,
  maximumScale: 1,
  userScalable: false,
};

export default ({ children }) => {
  return (
    <html
      lang="en"
      className={`bg-black text-white antialiased ${mainFont.className}`}
    >
      <body>{children}</body>
    </html>
  );
};
