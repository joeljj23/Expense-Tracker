# 🤝 Contributing to Expense Tracker

Thank you for your interest in contributing to **Expense Tracker**! We welcome contributions from developers of all skill levels. This document provides guidelines for contributing to our open source project.

## 🌟 Ways to Contribute

### 🐛 **Bug Reports**
- Search existing issues first
- Use clear, descriptive titles
- Include system information (OS, compiler version)
- Provide steps to reproduce the issue
- Include error messages if any

### 💡 **Feature Requests**
- Check if the feature already exists or is planned
- Explain the use case and benefits
- Provide mockups or examples if helpful
- Discuss implementation approach

### 📝 **Documentation**
- Improve README clarity
- Add code comments
- Create tutorials or guides
- Fix typos and grammar

### 💻 **Code Contributions**
- Bug fixes
- New features
- Performance improvements
- Code refactoring
- Test additions

## 🚀 Getting Started

### 1. **Fork the Repository**
```bash
# Click the "Fork" button on GitHub
# Then clone your fork
git clone https://github.com/YOUR_USERNAME/Expense-Tracker.git
cd Expense-Tracker
```

### 2. **Set Up Development Environment**
```bash
# Make sure you have a C++ compiler installed
# For Windows: MinGW-w64 or Visual Studio
# For Linux: GCC
# For macOS: Clang

# Test compilation
g++ "Expense Tracker.cpp" -o "bin/Expense Tracker.exe"
```

### 3. **Create a Feature Branch**
```bash
git checkout -b feature/your-feature-name
# or
git checkout -b bugfix/issue-description
```

## 📋 Development Guidelines

### **Code Style**
- Use clear, descriptive variable names
- Add comments for complex logic
- Follow existing code formatting
- Use meaningful function names
- Keep functions focused and small

### **Example Code Style:**
```cpp
/**
 * Function: calculateMonthlyTotal
 * Purpose: Calculates the total expenses for the month
 * Parameters: expenses - vector of expense amounts
 * Returns: Total sum as double
 */
double calculateMonthlyTotal(const vector<double>& expenses) {
    double total = 0.0;
    
    // Sum all expense amounts
    for (const double& expense : expenses) {
        total += expense;
    }
    
    return total;
}
```

### **Commit Guidelines**
- Write clear commit messages
- Use present tense ("Add feature" not "Added feature")
- Include issue number if applicable
- Keep commits focused on single changes

**Good commit examples:**
```
Add budget alert feature (#15)
Fix calculation error in expense totals
Update README with installation instructions
Refactor expense categorization logic
```

## 🧪 Testing

### **Before Submitting:**
- Test your changes thoroughly
- Verify the program compiles without errors
- Test different scenarios and edge cases
- Ensure existing functionality still works

### **Test Cases to Consider:**
- Negative numbers
- Very large numbers
- Empty inputs
- Special characters in category names
- File permission issues

## 📤 Submitting Your Contribution

### 1. **Push Your Changes**
```bash
git add .
git commit -m "Add your descriptive commit message"
git push origin feature/your-feature-name
```

### 2. **Create a Pull Request**
- Go to your fork on GitHub
- Click "New Pull Request"
- Choose the correct branches
- Fill out the PR template

### 3. **Pull Request Template**
```markdown
## Description
Brief description of your changes

## Type of Change
- [ ] Bug fix
- [ ] New feature
- [ ] Documentation update
- [ ] Performance improvement
- [ ] Code refactoring

## Testing
- [ ] I have tested my changes locally
- [ ] The program compiles without errors
- [ ] Existing functionality works correctly

## Screenshots (if applicable)
Add screenshots for UI changes

## Additional Notes
Any additional information or context
```

## 🎯 Project Priorities

### **High Priority:**
- Bug fixes and stability improvements
- Performance optimizations
- Better error handling
- User experience improvements

### **Medium Priority:**
- New expense categories
- Report formatting enhancements
- Code refactoring
- Documentation improvements

### **Future Goals:**
- Cross-platform compatibility
- GUI version
- Data persistence
- Advanced analytics

## 🏆 Recognition

### **Contributors Will Be:**
- Listed in CONTRIBUTORS.md
- Mentioned in release notes
- Credited in the README
- Invited to join the core team (for significant contributions)

### **Types of Recognition:**
- 🐛 Bug Hunter - Found and reported bugs
- 💡 Feature Creator - Added new features
- 📝 Documentation Hero - Improved docs
- 🎨 UX Improver - Enhanced user experience
- 🔧 Code Refactorer - Improved code quality

## 💬 Communication

### **Get Help:**
- 💬 **GitHub Discussions** - General questions and ideas
- 🐛 **GitHub Issues** - Bug reports and feature requests
- 📧 **Email** - Contact SA3DWY for major contributions
- 🌐 **Community** - Connect with other contributors

### **Response Times:**
- Issues: Within 48 hours
- Pull Requests: Within 1 week
- Questions: Within 24 hours

## 📜 Code of Conduct

### **Our Standards:**
- Be respectful and inclusive
- Welcome newcomers and beginners
- Focus on constructive feedback
- Help others learn and grow
- Maintain a positive environment

### **Unacceptable Behavior:**
- Harassment or discrimination
- Trolling or insulting comments
- Personal attacks
- Inappropriate content
- Spam or off-topic discussions

## 🎉 Thank You!

Every contribution makes this project better! Whether you're fixing a typo, adding a feature, or helping other users, your efforts are appreciated.

**Happy Coding! 💻✨**

---

*This contributing guide is adapted for our open source community. Questions? Feel free to ask!*

**[🏠 Back to README](README.md) | [🐛 Report Issues](https://github.com/Amr4924/Expense-Tracker/issues) | [💡 Suggest Features](https://github.com/Amr4924/Expense-Tracker/discussions)**