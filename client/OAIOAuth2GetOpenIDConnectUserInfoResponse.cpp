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

#include "OAIOAuth2GetOpenIDConnectUserInfoResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIOAuth2GetOpenIDConnectUserInfoResponse::OAIOAuth2GetOpenIDConnectUserInfoResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIOAuth2GetOpenIDConnectUserInfoResponse::OAIOAuth2GetOpenIDConnectUserInfoResponse() {
    this->initializeModel();
}

OAIOAuth2GetOpenIDConnectUserInfoResponse::~OAIOAuth2GetOpenIDConnectUserInfoResponse() {}

void OAIOAuth2GetOpenIDConnectUserInfoResponse::initializeModel() {

    m_sub_isSet = false;
    m_sub_isValid = false;

    m_email_isSet = false;
    m_email_isValid = false;

    m_email_verified_isSet = false;
    m_email_verified_isValid = false;

    m_preferred_username_isSet = false;
    m_preferred_username_isValid = false;

    m_nickname_isSet = false;
    m_nickname_isValid = false;

    m_picture_isSet = false;
    m_picture_isValid = false;

    m_locale_isSet = false;
    m_locale_isValid = false;
}

void OAIOAuth2GetOpenIDConnectUserInfoResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIOAuth2GetOpenIDConnectUserInfoResponse::fromJsonObject(QJsonObject json) {

    m_sub_isValid = ::dc_rest::fromJsonValue(m_sub, json[QString("sub")]);
    m_sub_isSet = !json[QString("sub")].isNull() && m_sub_isValid;

    m_email_isValid = ::dc_rest::fromJsonValue(m_email, json[QString("email")]);
    m_email_isSet = !json[QString("email")].isNull() && m_email_isValid;

    m_email_verified_isValid = ::dc_rest::fromJsonValue(m_email_verified, json[QString("email_verified")]);
    m_email_verified_isSet = !json[QString("email_verified")].isNull() && m_email_verified_isValid;

    m_preferred_username_isValid = ::dc_rest::fromJsonValue(m_preferred_username, json[QString("preferred_username")]);
    m_preferred_username_isSet = !json[QString("preferred_username")].isNull() && m_preferred_username_isValid;

    m_nickname_isValid = ::dc_rest::fromJsonValue(m_nickname, json[QString("nickname")]);
    m_nickname_isSet = !json[QString("nickname")].isNull() && m_nickname_isValid;

    m_picture_isValid = ::dc_rest::fromJsonValue(m_picture, json[QString("picture")]);
    m_picture_isSet = !json[QString("picture")].isNull() && m_picture_isValid;

    m_locale_isValid = ::dc_rest::fromJsonValue(m_locale, json[QString("locale")]);
    m_locale_isSet = !json[QString("locale")].isNull() && m_locale_isValid;
}

QString OAIOAuth2GetOpenIDConnectUserInfoResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIOAuth2GetOpenIDConnectUserInfoResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_sub_isSet) {
        obj.insert(QString("sub"), ::dc_rest::toJsonValue(m_sub));
    }
    if (m_email_isSet) {
        obj.insert(QString("email"), ::dc_rest::toJsonValue(m_email));
    }
    if (m_email_verified_isSet) {
        obj.insert(QString("email_verified"), ::dc_rest::toJsonValue(m_email_verified));
    }
    if (m_preferred_username_isSet) {
        obj.insert(QString("preferred_username"), ::dc_rest::toJsonValue(m_preferred_username));
    }
    if (m_nickname_isSet) {
        obj.insert(QString("nickname"), ::dc_rest::toJsonValue(m_nickname));
    }
    if (m_picture_isSet) {
        obj.insert(QString("picture"), ::dc_rest::toJsonValue(m_picture));
    }
    if (m_locale_isSet) {
        obj.insert(QString("locale"), ::dc_rest::toJsonValue(m_locale));
    }
    return obj;
}

QString OAIOAuth2GetOpenIDConnectUserInfoResponse::getSub() const {
    return m_sub;
}
void OAIOAuth2GetOpenIDConnectUserInfoResponse::setSub(const QString &sub) {
    m_sub = sub;
    m_sub_isSet = true;
}

bool OAIOAuth2GetOpenIDConnectUserInfoResponse::is_sub_Set() const{
    return m_sub_isSet;
}

bool OAIOAuth2GetOpenIDConnectUserInfoResponse::is_sub_Valid() const{
    return m_sub_isValid;
}

QString OAIOAuth2GetOpenIDConnectUserInfoResponse::getEmail() const {
    return m_email;
}
void OAIOAuth2GetOpenIDConnectUserInfoResponse::setEmail(const QString &email) {
    m_email = email;
    m_email_isSet = true;
}

bool OAIOAuth2GetOpenIDConnectUserInfoResponse::is_email_Set() const{
    return m_email_isSet;
}

bool OAIOAuth2GetOpenIDConnectUserInfoResponse::is_email_Valid() const{
    return m_email_isValid;
}

bool OAIOAuth2GetOpenIDConnectUserInfoResponse::isEmailVerified() const {
    return m_email_verified;
}
void OAIOAuth2GetOpenIDConnectUserInfoResponse::setEmailVerified(const bool &email_verified) {
    m_email_verified = email_verified;
    m_email_verified_isSet = true;
}

bool OAIOAuth2GetOpenIDConnectUserInfoResponse::is_email_verified_Set() const{
    return m_email_verified_isSet;
}

bool OAIOAuth2GetOpenIDConnectUserInfoResponse::is_email_verified_Valid() const{
    return m_email_verified_isValid;
}

QString OAIOAuth2GetOpenIDConnectUserInfoResponse::getPreferredUsername() const {
    return m_preferred_username;
}
void OAIOAuth2GetOpenIDConnectUserInfoResponse::setPreferredUsername(const QString &preferred_username) {
    m_preferred_username = preferred_username;
    m_preferred_username_isSet = true;
}

bool OAIOAuth2GetOpenIDConnectUserInfoResponse::is_preferred_username_Set() const{
    return m_preferred_username_isSet;
}

bool OAIOAuth2GetOpenIDConnectUserInfoResponse::is_preferred_username_Valid() const{
    return m_preferred_username_isValid;
}

QString OAIOAuth2GetOpenIDConnectUserInfoResponse::getNickname() const {
    return m_nickname;
}
void OAIOAuth2GetOpenIDConnectUserInfoResponse::setNickname(const QString &nickname) {
    m_nickname = nickname;
    m_nickname_isSet = true;
}

bool OAIOAuth2GetOpenIDConnectUserInfoResponse::is_nickname_Set() const{
    return m_nickname_isSet;
}

bool OAIOAuth2GetOpenIDConnectUserInfoResponse::is_nickname_Valid() const{
    return m_nickname_isValid;
}

QString OAIOAuth2GetOpenIDConnectUserInfoResponse::getPicture() const {
    return m_picture;
}
void OAIOAuth2GetOpenIDConnectUserInfoResponse::setPicture(const QString &picture) {
    m_picture = picture;
    m_picture_isSet = true;
}

bool OAIOAuth2GetOpenIDConnectUserInfoResponse::is_picture_Set() const{
    return m_picture_isSet;
}

bool OAIOAuth2GetOpenIDConnectUserInfoResponse::is_picture_Valid() const{
    return m_picture_isValid;
}

QString OAIOAuth2GetOpenIDConnectUserInfoResponse::getLocale() const {
    return m_locale;
}
void OAIOAuth2GetOpenIDConnectUserInfoResponse::setLocale(const QString &locale) {
    m_locale = locale;
    m_locale_isSet = true;
}

bool OAIOAuth2GetOpenIDConnectUserInfoResponse::is_locale_Set() const{
    return m_locale_isSet;
}

bool OAIOAuth2GetOpenIDConnectUserInfoResponse::is_locale_Valid() const{
    return m_locale_isValid;
}

bool OAIOAuth2GetOpenIDConnectUserInfoResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_sub_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_email_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_email_verified_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_preferred_username_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_nickname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_picture_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_locale_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIOAuth2GetOpenIDConnectUserInfoResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_sub_isValid && true;
}

} // namespace dc_rest
