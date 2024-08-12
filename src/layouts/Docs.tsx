import { Outlet } from "react-router-dom";
import DocsMenu from "../components/DocsMenu";
import Footer from "../components/Footer";

export default function Docs() {
  return (
    <>
      <DocsMenu />
      <Outlet />
      <Footer />
    </>
  );
}
