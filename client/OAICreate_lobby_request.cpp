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

#include "OAICreate_lobby_request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAICreate_lobby_request::OAICreate_lobby_request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICreate_lobby_request::OAICreate_lobby_request() {
    this->initializeModel();
}

OAICreate_lobby_request::~OAICreate_lobby_request() {}

void OAICreate_lobby_request::initializeModel() {

    m_idle_timeout_seconds_isSet = false;
    m_idle_timeout_seconds_isValid = false;

    m_members_isSet = false;
    m_members_isValid = false;

    m_metadata_isSet = false;
    m_metadata_isValid = false;
}

void OAICreate_lobby_request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICreate_lobby_request::fromJsonObject(QJsonObject json) {

    m_idle_timeout_seconds_isValid = ::dc_rest::fromJsonValue(m_idle_timeout_seconds, json[QString("idle_timeout_seconds")]);
    m_idle_timeout_seconds_isSet = !json[QString("idle_timeout_seconds")].isNull() && m_idle_timeout_seconds_isValid;

    m_members_isValid = ::dc_rest::fromJsonValue(m_members, json[QString("members")]);
    m_members_isSet = !json[QString("members")].isNull() && m_members_isValid;

    m_metadata_isValid = ::dc_rest::fromJsonValue(m_metadata, json[QString("metadata")]);
    m_metadata_isSet = !json[QString("metadata")].isNull() && m_metadata_isValid;
}

QString OAICreate_lobby_request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICreate_lobby_request::asJsonObject() const {
    QJsonObject obj;
    if (m_idle_timeout_seconds_isSet) {
        obj.insert(QString("idle_timeout_seconds"), ::dc_rest::toJsonValue(m_idle_timeout_seconds));
    }
    if (m_members.size() > 0) {
        obj.insert(QString("members"), ::dc_rest::toJsonValue(m_members));
    }
    if (m_metadata.size() > 0) {
        obj.insert(QString("metadata"), ::dc_rest::toJsonValue(m_metadata));
    }
    return obj;
}

qint32 OAICreate_lobby_request::getIdleTimeoutSeconds() const {
    return m_idle_timeout_seconds;
}
void OAICreate_lobby_request::setIdleTimeoutSeconds(const qint32 &idle_timeout_seconds) {
    m_idle_timeout_seconds = idle_timeout_seconds;
    m_idle_timeout_seconds_isSet = true;
}

bool OAICreate_lobby_request::is_idle_timeout_seconds_Set() const{
    return m_idle_timeout_seconds_isSet;
}

bool OAICreate_lobby_request::is_idle_timeout_seconds_Valid() const{
    return m_idle_timeout_seconds_isValid;
}

QList<OAILobbyMemberRequest> OAICreate_lobby_request::getMembers() const {
    return m_members;
}
void OAICreate_lobby_request::setMembers(const QList<OAILobbyMemberRequest> &members) {
    m_members = members;
    m_members_isSet = true;
}

bool OAICreate_lobby_request::is_members_Set() const{
    return m_members_isSet;
}

bool OAICreate_lobby_request::is_members_Valid() const{
    return m_members_isValid;
}

QMap<QString, QString> OAICreate_lobby_request::getMetadata() const {
    return m_metadata;
}
void OAICreate_lobby_request::setMetadata(const QMap<QString, QString> &metadata) {
    m_metadata = metadata;
    m_metadata_isSet = true;
}

bool OAICreate_lobby_request::is_metadata_Set() const{
    return m_metadata_isSet;
}

bool OAICreate_lobby_request::is_metadata_Valid() const{
    return m_metadata_isValid;
}

bool OAICreate_lobby_request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_idle_timeout_seconds_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_members.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_metadata.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICreate_lobby_request::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace dc_rest
