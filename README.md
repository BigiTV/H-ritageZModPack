# HeritageZ Mod - Request for Help

## 👋 Hello DayZ Expansion Community,

I'm currently developing a private server project called **HeritageZ**, based on **DayZ Expansion**.

In this mod, I have:

✅ Added **custom AI factions** for Expansion AI  
✅ Tried to implement a **custom loading screen**, inspired by Salutesh's Community Loading Screen  

---

## ❗ The Problem

As soon as I try to integrate the **custom loading screen** inside the same mod, my **factions stop working**, and the loading screen does not override Expansion's default one properly.

I've spent several days testing:

✔ The file structure follows the guidelines  
✔ `.edds` textures are properly packed  
✔ `config.cpp` and `Loadingscreen.c` are implemented  

Despite this, the Expansion loading screen keeps showing, and my factions disappear.

---

## 🛠️ What I've Tried

- Keeping all files in one `.pbo`
- Using `.edds` format for all images
- Custom `ExpansionLoadingScreenSettings.json`
- Correct mod load order

---

## 📁 Repository Purpose

I've uploaded my mod **publicly** on this GitHub to make it easier for experienced modders or DayZ Expansion developers to review my structure and scripts.

**Any help, suggestions, or debugging tips would be highly appreciated!**  

If you can point out what's wrong, or recommend best practices (like splitting factions and loading screen into separate `.pbo` files), that would be amazing.

---

## 🔗 How to Help

Feel free to:

- Explore the repository  
- Review the `config.cpp`, `Loadingscreen.c`, and mod structure  
- Suggest changes via GitHub Issues  
- Contact me directly if you prefer  

---

## 🙏 Thanks in advance for your time and support!  
**Bigi**  
Private DayZ Expansion server project - HeritageZ  
