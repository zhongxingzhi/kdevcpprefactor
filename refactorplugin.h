/*
 * Copyright (c) 2013 Maciej Cencora <m.cencora@gmail.co>
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 */

#ifndef CLANGREFACTORLANGUAGESUPPORT_H
#define CLANGREFACTORLANGUAGESUPPORT_H

#include <interfaces/iplugin.h>
#include <QVariant>

namespace KDevelop
{
class EditorContext;
}

class RefactorPlugin : public KDevelop::IPlugin
{
    Q_OBJECT

public:
    explicit RefactorPlugin(QObject *parent, const QVariantList&);

    virtual KDevelop::ContextMenuExtension contextMenuExtension(KDevelop::Context* context);

public slots:
    void showExtractFunction();
    void executeExtractFunction(const QString& functionName);

private:
    KDevelop::EditorContext* context;
};

#endif // CLANGREFACTORLANGUAGESUPPORT_H
