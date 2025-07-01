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

#include "OAIGithubIssue.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIGithubIssue::OAIGithubIssue(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGithubIssue::OAIGithubIssue() {
    this->initializeModel();
}

OAIGithubIssue::~OAIGithubIssue() {}

void OAIGithubIssue::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_number_isSet = false;
    m_number_isValid = false;

    m_html_url_isSet = false;
    m_html_url_isValid = false;

    m_user_isSet = false;
    m_user_isValid = false;

    m_title_isSet = false;
    m_title_isValid = false;

    m_body_isSet = false;
    m_body_isValid = false;

    m_pull_request_isSet = false;
    m_pull_request_isValid = false;
}

void OAIGithubIssue::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGithubIssue::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_number_isValid = ::dc_rest::fromJsonValue(m_number, json[QString("number")]);
    m_number_isSet = !json[QString("number")].isNull() && m_number_isValid;

    m_html_url_isValid = ::dc_rest::fromJsonValue(m_html_url, json[QString("html_url")]);
    m_html_url_isSet = !json[QString("html_url")].isNull() && m_html_url_isValid;

    m_user_isValid = ::dc_rest::fromJsonValue(m_user, json[QString("user")]);
    m_user_isSet = !json[QString("user")].isNull() && m_user_isValid;

    m_title_isValid = ::dc_rest::fromJsonValue(m_title, json[QString("title")]);
    m_title_isSet = !json[QString("title")].isNull() && m_title_isValid;

    m_body_isValid = ::dc_rest::fromJsonValue(m_body, json[QString("body")]);
    m_body_isSet = !json[QString("body")].isNull() && m_body_isValid;

    m_pull_request_isValid = ::dc_rest::fromJsonValue(m_pull_request, json[QString("pull_request")]);
    m_pull_request_isSet = !json[QString("pull_request")].isNull() && m_pull_request_isValid;
}

QString OAIGithubIssue::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGithubIssue::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::dc_rest::toJsonValue(m_id));
    }
    if (m_number_isSet) {
        obj.insert(QString("number"), ::dc_rest::toJsonValue(m_number));
    }
    if (m_html_url_isSet) {
        obj.insert(QString("html_url"), ::dc_rest::toJsonValue(m_html_url));
    }
    if (m_user.isSet()) {
        obj.insert(QString("user"), ::dc_rest::toJsonValue(m_user));
    }
    if (m_title_isSet) {
        obj.insert(QString("title"), ::dc_rest::toJsonValue(m_title));
    }
    if (m_body_isSet) {
        obj.insert(QString("body"), ::dc_rest::toJsonValue(m_body));
    }
    if (m_pull_request_isSet) {
        obj.insert(QString("pull_request"), ::dc_rest::toJsonValue(m_pull_request));
    }
    return obj;
}

qint32 OAIGithubIssue::getId() const {
    return m_id;
}
void OAIGithubIssue::setId(const qint32 &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIGithubIssue::is_id_Set() const{
    return m_id_isSet;
}

bool OAIGithubIssue::is_id_Valid() const{
    return m_id_isValid;
}

qint32 OAIGithubIssue::getNumber() const {
    return m_number;
}
void OAIGithubIssue::setNumber(const qint32 &number) {
    m_number = number;
    m_number_isSet = true;
}

bool OAIGithubIssue::is_number_Set() const{
    return m_number_isSet;
}

bool OAIGithubIssue::is_number_Valid() const{
    return m_number_isValid;
}

QString OAIGithubIssue::getHtmlUrl() const {
    return m_html_url;
}
void OAIGithubIssue::setHtmlUrl(const QString &html_url) {
    m_html_url = html_url;
    m_html_url_isSet = true;
}

bool OAIGithubIssue::is_html_url_Set() const{
    return m_html_url_isSet;
}

bool OAIGithubIssue::is_html_url_Valid() const{
    return m_html_url_isValid;
}

OAIGithubUser OAIGithubIssue::getUser() const {
    return m_user;
}
void OAIGithubIssue::setUser(const OAIGithubUser &user) {
    m_user = user;
    m_user_isSet = true;
}

bool OAIGithubIssue::is_user_Set() const{
    return m_user_isSet;
}

bool OAIGithubIssue::is_user_Valid() const{
    return m_user_isValid;
}

QString OAIGithubIssue::getTitle() const {
    return m_title;
}
void OAIGithubIssue::setTitle(const QString &title) {
    m_title = title;
    m_title_isSet = true;
}

bool OAIGithubIssue::is_title_Set() const{
    return m_title_isSet;
}

bool OAIGithubIssue::is_title_Valid() const{
    return m_title_isValid;
}

QString OAIGithubIssue::getBody() const {
    return m_body;
}
void OAIGithubIssue::setBody(const QString &body) {
    m_body = body;
    m_body_isSet = true;
}

bool OAIGithubIssue::is_body_Set() const{
    return m_body_isSet;
}

bool OAIGithubIssue::is_body_Valid() const{
    return m_body_isValid;
}

QJsonValue OAIGithubIssue::getPullRequest() const {
    return m_pull_request;
}
void OAIGithubIssue::setPullRequest(const QJsonValue &pull_request) {
    m_pull_request = pull_request;
    m_pull_request_isSet = true;
}

bool OAIGithubIssue::is_pull_request_Set() const{
    return m_pull_request_isSet;
}

bool OAIGithubIssue::is_pull_request_Valid() const{
    return m_pull_request_isValid;
}

bool OAIGithubIssue::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_number_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_html_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_user.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_title_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_body_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pull_request_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGithubIssue::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_number_isValid && m_html_url_isValid && m_user_isValid && m_title_isValid && true;
}

} // namespace dc_rest
