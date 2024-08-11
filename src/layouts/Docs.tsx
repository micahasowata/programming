import { Outlet } from "react-router-dom";
import Menu from "../components/Menu";

export default function Docs() {
  return (
    <>
      <Menu />
      <Outlet />
      <small>Works</small>
    </>
  );
}
