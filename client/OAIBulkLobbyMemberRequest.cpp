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

#include "OAIBulkLobbyMemberRequest.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIBulkLobbyMemberRequest::OAIBulkLobbyMemberRequest(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIBulkLobbyMemberRequest::OAIBulkLobbyMemberRequest() {
    this->initializeModel();
}

OAIBulkLobbyMemberRequest::~OAIBulkLobbyMemberRequest() {}

void OAIBulkLobbyMemberRequest::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_metadata_isSet = false;
    m_metadata_isValid = false;

    m_flags_isSet = false;
    m_flags_isValid = false;

    m_remove_member_isSet = false;
    m_remove_member_isValid = false;
}

void OAIBulkLobbyMemberRequest::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIBulkLobbyMemberRequest::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_metadata_isValid = ::dc_rest::fromJsonValue(m_metadata, json[QString("metadata")]);
    m_metadata_isSet = !json[QString("metadata")].isNull() && m_metadata_isValid;

    m_flags_isValid = ::dc_rest::fromJsonValue(m_flags, json[QString("flags")]);
    m_flags_isSet = !json[QString("flags")].isNull() && m_flags_isValid;

    m_remove_member_isValid = ::dc_rest::fromJsonValue(m_remove_member, json[QString("remove_member")]);
    m_remove_member_isSet = !json[QString("remove_member")].isNull() && m_remove_member_isValid;
}

QString OAIBulkLobbyMemberRequest::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIBulkLobbyMemberRequest::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::dc_rest::toJsonValue(m_id));
    }
    if (m_metadata.size() > 0) {
        obj.insert(QString("metadata"), ::dc_rest::toJsonValue(m_metadata));
    }
    if (m_flags_isSet) {
        obj.insert(QString("flags"), ::dc_rest::toJsonValue(m_flags));
    }
    if (m_remove_member_isSet) {
        obj.insert(QString("remove_member"), ::dc_rest::toJsonValue(m_remove_member));
    }
    return obj;
}

QString OAIBulkLobbyMemberRequest::getId() const {
    return m_id;
}
void OAIBulkLobbyMemberRequest::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIBulkLobbyMemberRequest::is_id_Set() const{
    return m_id_isSet;
}

bool OAIBulkLobbyMemberRequest::is_id_Valid() const{
    return m_id_isValid;
}

QMap<QString, QString> OAIBulkLobbyMemberRequest::getMetadata() const {
    return m_metadata;
}
void OAIBulkLobbyMemberRequest::setMetadata(const QMap<QString, QString> &metadata) {
    m_metadata = metadata;
    m_metadata_isSet = true;
}

bool OAIBulkLobbyMemberRequest::is_metadata_Set() const{
    return m_metadata_isSet;
}

bool OAIBulkLobbyMemberRequest::is_metadata_Valid() const{
    return m_metadata_isValid;
}

qint32 OAIBulkLobbyMemberRequest::getFlags() const {
    return m_flags;
}
void OAIBulkLobbyMemberRequest::setFlags(const qint32 &flags) {
    m_flags = flags;
    m_flags_isSet = true;
}

bool OAIBulkLobbyMemberRequest::is_flags_Set() const{
    return m_flags_isSet;
}

bool OAIBulkLobbyMemberRequest::is_flags_Valid() const{
    return m_flags_isValid;
}

bool OAIBulkLobbyMemberRequest::isRemoveMember() const {
    return m_remove_member;
}
void OAIBulkLobbyMemberRequest::setRemoveMember(const bool &remove_member) {
    m_remove_member = remove_member;
    m_remove_member_isSet = true;
}

bool OAIBulkLobbyMemberRequest::is_remove_member_Set() const{
    return m_remove_member_isSet;
}

bool OAIBulkLobbyMemberRequest::is_remove_member_Valid() const{
    return m_remove_member_isValid;
}

bool OAIBulkLobbyMemberRequest::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_metadata.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_flags_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_remove_member_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIBulkLobbyMemberRequest::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && true;
}

} // namespace dc_rest
