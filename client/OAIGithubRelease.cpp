/**
 * Discord HTTP API (Preview) - REST API Client
 * Preview of the Discord v10 HTTP API specification. See https://discord.com/developers/docs for more details.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 10
 * - **Modified**: 2025-07-01T06:33:49.033017897Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Discord HTTP API (Preview) service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

#include "OAIGithubRelease.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIGithubRelease::OAIGithubRelease(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGithubRelease::OAIGithubRelease() {
    this->initializeModel();
}

OAIGithubRelease::~OAIGithubRelease() {}

void OAIGithubRelease::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_tag_name_isSet = false;
    m_tag_name_isValid = false;

    m_html_url_isSet = false;
    m_html_url_isValid = false;

    m_author_isSet = false;
    m_author_isValid = false;
}

void OAIGithubRelease::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGithubRelease::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_tag_name_isValid = ::dc_rest::fromJsonValue(m_tag_name, json[QString("tag_name")]);
    m_tag_name_isSet = !json[QString("tag_name")].isNull() && m_tag_name_isValid;

    m_html_url_isValid = ::dc_rest::fromJsonValue(m_html_url, json[QString("html_url")]);
    m_html_url_isSet = !json[QString("html_url")].isNull() && m_html_url_isValid;

    m_author_isValid = ::dc_rest::fromJsonValue(m_author, json[QString("author")]);
    m_author_isSet = !json[QString("author")].isNull() && m_author_isValid;
}

QString OAIGithubRelease::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGithubRelease::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::dc_rest::toJsonValue(m_id));
    }
    if (m_tag_name_isSet) {
        obj.insert(QString("tag_name"), ::dc_rest::toJsonValue(m_tag_name));
    }
    if (m_html_url_isSet) {
        obj.insert(QString("html_url"), ::dc_rest::toJsonValue(m_html_url));
    }
    if (m_author.isSet()) {
        obj.insert(QString("author"), ::dc_rest::toJsonValue(m_author));
    }
    return obj;
}

qint32 OAIGithubRelease::getId() const {
    return m_id;
}
void OAIGithubRelease::setId(const qint32 &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIGithubRelease::is_id_Set() const{
    return m_id_isSet;
}

bool OAIGithubRelease::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIGithubRelease::getTagName() const {
    return m_tag_name;
}
void OAIGithubRelease::setTagName(const QString &tag_name) {
    m_tag_name = tag_name;
    m_tag_name_isSet = true;
}

bool OAIGithubRelease::is_tag_name_Set() const{
    return m_tag_name_isSet;
}

bool OAIGithubRelease::is_tag_name_Valid() const{
    return m_tag_name_isValid;
}

QString OAIGithubRelease::getHtmlUrl() const {
    return m_html_url;
}
void OAIGithubRelease::setHtmlUrl(const QString &html_url) {
    m_html_url = html_url;
    m_html_url_isSet = true;
}

bool OAIGithubRelease::is_html_url_Set() const{
    return m_html_url_isSet;
}

bool OAIGithubRelease::is_html_url_Valid() const{
    return m_html_url_isValid;
}

OAIGithubUser OAIGithubRelease::getAuthor() const {
    return m_author;
}
void OAIGithubRelease::setAuthor(const OAIGithubUser &author) {
    m_author = author;
    m_author_isSet = true;
}

bool OAIGithubRelease::is_author_Set() const{
    return m_author_isSet;
}

bool OAIGithubRelease::is_author_Valid() const{
    return m_author_isValid;
}

bool OAIGithubRelease::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_tag_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_html_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_author.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGithubRelease::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_tag_name_isValid && m_html_url_isValid && m_author_isValid && true;
}

} // namespace dc_rest
