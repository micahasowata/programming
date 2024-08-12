import { themes as prismThemes } from "prism-react-renderer";
import type { ThemeConfig } from "@docusaurus/types";
import type * as Preset from "@docusaurus/preset-classic";

const config: ThemeConfig = {
  title: "Tiny Docs",
  tagline: "Be Tiny. Be Simple",
  url: "https://tdocs.micahasowata.com",
  baseUrl: "/",
  onBrokenLinks: "throw",
  onBrokenMarkdownLinks: "throw",
  i18n: {
    defaultLocale: "en",
    locales: ["en"],
  },

  presets: [
    [
      "classic",
      {
        docs: {
          sidebarPath: "./sidebars.ts",
        },
        blog: {
          showReadingTime: true,
          feedOptions: {
            type: ["rss", "atom"],
            xslt: true,
          },
        },
        theme: {
          customCss: "./src/css/custom.css",
        },
      } satisfies Preset.Options,
    ],
  ],

  themeConfig: {
    image: "img/logo.png",
    navbar: {
      title: "",
      logo: {
        alt: "Tiny Docs logo",
        src: "img/logo.svg",
      },
      hideOnScroll: false,
      items: [
        {
          type: "docSidebar",
          sidebarId: "APIReferenceSidebar",
          position: "left",
          label: "Docs",
        },
        {
          href: "https://github.com/micahasowata/minasa-docs",
          label: "GitHub",
          position: "right",
        },
      ],
    },
    footer: {
      style: "dark",
      links: [
        {
          title: "Docs",
          items: [
            {
              label: "Docs",
              to: "/docs/overview",
            },
          ],
        },
        {
          title: "More",
          items: [
            {
              label: "Blog",
              href: "https://micahasowata.com",
            },
            {
              label: "GitHub",
              href: "https://github.com/micahasowata/minasa-docs",
            },
          ],
        },
      ],
      copyright: `Copyright © ${new Date().getFullYear()}. Built by Micah Asowata with Docusaurus.`,
    },
    prism: {
      theme: prismThemes.github,
      darkTheme: prismThemes.dracula,
    },
  } satisfies Preset.ThemeConfig,
};

export default config;
