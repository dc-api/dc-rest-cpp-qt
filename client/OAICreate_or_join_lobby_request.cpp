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

#include "OAICreate_or_join_lobby_request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAICreate_or_join_lobby_request::OAICreate_or_join_lobby_request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICreate_or_join_lobby_request::OAICreate_or_join_lobby_request() {
    this->initializeModel();
}

OAICreate_or_join_lobby_request::~OAICreate_or_join_lobby_request() {}

void OAICreate_or_join_lobby_request::initializeModel() {

    m_secret_isSet = false;
    m_secret_isValid = false;

    m_idle_timeout_seconds_isSet = false;
    m_idle_timeout_seconds_isValid = false;

    m_lobby_metadata_isSet = false;
    m_lobby_metadata_isValid = false;

    m_member_metadata_isSet = false;
    m_member_metadata_isValid = false;
}

void OAICreate_or_join_lobby_request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICreate_or_join_lobby_request::fromJsonObject(QJsonObject json) {

    m_secret_isValid = ::dc_rest::fromJsonValue(m_secret, json[QString("secret")]);
    m_secret_isSet = !json[QString("secret")].isNull() && m_secret_isValid;

    m_idle_timeout_seconds_isValid = ::dc_rest::fromJsonValue(m_idle_timeout_seconds, json[QString("idle_timeout_seconds")]);
    m_idle_timeout_seconds_isSet = !json[QString("idle_timeout_seconds")].isNull() && m_idle_timeout_seconds_isValid;

    m_lobby_metadata_isValid = ::dc_rest::fromJsonValue(m_lobby_metadata, json[QString("lobby_metadata")]);
    m_lobby_metadata_isSet = !json[QString("lobby_metadata")].isNull() && m_lobby_metadata_isValid;

    m_member_metadata_isValid = ::dc_rest::fromJsonValue(m_member_metadata, json[QString("member_metadata")]);
    m_member_metadata_isSet = !json[QString("member_metadata")].isNull() && m_member_metadata_isValid;
}

QString OAICreate_or_join_lobby_request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICreate_or_join_lobby_request::asJsonObject() const {
    QJsonObject obj;
    if (m_secret_isSet) {
        obj.insert(QString("secret"), ::dc_rest::toJsonValue(m_secret));
    }
    if (m_idle_timeout_seconds_isSet) {
        obj.insert(QString("idle_timeout_seconds"), ::dc_rest::toJsonValue(m_idle_timeout_seconds));
    }
    if (m_lobby_metadata.size() > 0) {
        obj.insert(QString("lobby_metadata"), ::dc_rest::toJsonValue(m_lobby_metadata));
    }
    if (m_member_metadata.size() > 0) {
        obj.insert(QString("member_metadata"), ::dc_rest::toJsonValue(m_member_metadata));
    }
    return obj;
}

QString OAICreate_or_join_lobby_request::getSecret() const {
    return m_secret;
}
void OAICreate_or_join_lobby_request::setSecret(const QString &secret) {
    m_secret = secret;
    m_secret_isSet = true;
}

bool OAICreate_or_join_lobby_request::is_secret_Set() const{
    return m_secret_isSet;
}

bool OAICreate_or_join_lobby_request::is_secret_Valid() const{
    return m_secret_isValid;
}

qint32 OAICreate_or_join_lobby_request::getIdleTimeoutSeconds() const {
    return m_idle_timeout_seconds;
}
void OAICreate_or_join_lobby_request::setIdleTimeoutSeconds(const qint32 &idle_timeout_seconds) {
    m_idle_timeout_seconds = idle_timeout_seconds;
    m_idle_timeout_seconds_isSet = true;
}

bool OAICreate_or_join_lobby_request::is_idle_timeout_seconds_Set() const{
    return m_idle_timeout_seconds_isSet;
}

bool OAICreate_or_join_lobby_request::is_idle_timeout_seconds_Valid() const{
    return m_idle_timeout_seconds_isValid;
}

QMap<QString, QString> OAICreate_or_join_lobby_request::getLobbyMetadata() const {
    return m_lobby_metadata;
}
void OAICreate_or_join_lobby_request::setLobbyMetadata(const QMap<QString, QString> &lobby_metadata) {
    m_lobby_metadata = lobby_metadata;
    m_lobby_metadata_isSet = true;
}

bool OAICreate_or_join_lobby_request::is_lobby_metadata_Set() const{
    return m_lobby_metadata_isSet;
}

bool OAICreate_or_join_lobby_request::is_lobby_metadata_Valid() const{
    return m_lobby_metadata_isValid;
}

QMap<QString, QString> OAICreate_or_join_lobby_request::getMemberMetadata() const {
    return m_member_metadata;
}
void OAICreate_or_join_lobby_request::setMemberMetadata(const QMap<QString, QString> &member_metadata) {
    m_member_metadata = member_metadata;
    m_member_metadata_isSet = true;
}

bool OAICreate_or_join_lobby_request::is_member_metadata_Set() const{
    return m_member_metadata_isSet;
}

bool OAICreate_or_join_lobby_request::is_member_metadata_Valid() const{
    return m_member_metadata_isValid;
}

bool OAICreate_or_join_lobby_request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_secret_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_idle_timeout_seconds_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_lobby_metadata.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_member_metadata.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICreate_or_join_lobby_request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_secret_isValid && true;
}

} // namespace dc_rest
