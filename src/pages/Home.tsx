import { Link } from "react-router-dom";
import Menu from "../components/Menu";

export default function Home() {
  return (
    <>
      <Menu />
      <h1>Tiny Docs</h1>
      <p>
        Effortlessly manage tasks and to-do lists with our streamlined todo API,
        built for developers who value simplicity and performance.{" "}
      </p>
      <Link to={"/docs"}>Read the docs</Link>
    </>
  );
}
