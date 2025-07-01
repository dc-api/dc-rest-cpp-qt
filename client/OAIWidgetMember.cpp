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

#include "OAIWidgetMember.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAIWidgetMember::OAIWidgetMember(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIWidgetMember::OAIWidgetMember() {
    this->initializeModel();
}

OAIWidgetMember::~OAIWidgetMember() {}

void OAIWidgetMember::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_username_isSet = false;
    m_username_isValid = false;

    m_discriminator_isSet = false;
    m_discriminator_isValid = false;

    m_status_isSet = false;
    m_status_isValid = false;

    m_avatar_url_isSet = false;
    m_avatar_url_isValid = false;

    m_avatar_isSet = false;
    m_avatar_isValid = false;

    m_activity_isSet = false;
    m_activity_isValid = false;

    m_deaf_isSet = false;
    m_deaf_isValid = false;

    m_mute_isSet = false;
    m_mute_isValid = false;

    m_self_deaf_isSet = false;
    m_self_deaf_isValid = false;

    m_self_mute_isSet = false;
    m_self_mute_isValid = false;

    m_suppress_isSet = false;
    m_suppress_isValid = false;

    m_channel_id_isSet = false;
    m_channel_id_isValid = false;
}

void OAIWidgetMember::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIWidgetMember::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::dc_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_username_isValid = ::dc_rest::fromJsonValue(m_username, json[QString("username")]);
    m_username_isSet = !json[QString("username")].isNull() && m_username_isValid;

    m_discriminator_isValid = ::dc_rest::fromJsonValue(m_discriminator, json[QString("discriminator")]);
    m_discriminator_isSet = !json[QString("discriminator")].isNull() && m_discriminator_isValid;

    m_status_isValid = ::dc_rest::fromJsonValue(m_status, json[QString("status")]);
    m_status_isSet = !json[QString("status")].isNull() && m_status_isValid;

    m_avatar_url_isValid = ::dc_rest::fromJsonValue(m_avatar_url, json[QString("avatar_url")]);
    m_avatar_url_isSet = !json[QString("avatar_url")].isNull() && m_avatar_url_isValid;

    m_avatar_isValid = ::dc_rest::fromJsonValue(m_avatar, json[QString("avatar")]);
    m_avatar_isSet = !json[QString("avatar")].isNull() && m_avatar_isValid;

    m_activity_isValid = ::dc_rest::fromJsonValue(m_activity, json[QString("activity")]);
    m_activity_isSet = !json[QString("activity")].isNull() && m_activity_isValid;

    m_deaf_isValid = ::dc_rest::fromJsonValue(m_deaf, json[QString("deaf")]);
    m_deaf_isSet = !json[QString("deaf")].isNull() && m_deaf_isValid;

    m_mute_isValid = ::dc_rest::fromJsonValue(m_mute, json[QString("mute")]);
    m_mute_isSet = !json[QString("mute")].isNull() && m_mute_isValid;

    m_self_deaf_isValid = ::dc_rest::fromJsonValue(m_self_deaf, json[QString("self_deaf")]);
    m_self_deaf_isSet = !json[QString("self_deaf")].isNull() && m_self_deaf_isValid;

    m_self_mute_isValid = ::dc_rest::fromJsonValue(m_self_mute, json[QString("self_mute")]);
    m_self_mute_isSet = !json[QString("self_mute")].isNull() && m_self_mute_isValid;

    m_suppress_isValid = ::dc_rest::fromJsonValue(m_suppress, json[QString("suppress")]);
    m_suppress_isSet = !json[QString("suppress")].isNull() && m_suppress_isValid;

    m_channel_id_isValid = ::dc_rest::fromJsonValue(m_channel_id, json[QString("channel_id")]);
    m_channel_id_isSet = !json[QString("channel_id")].isNull() && m_channel_id_isValid;
}

QString OAIWidgetMember::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIWidgetMember::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::dc_rest::toJsonValue(m_id));
    }
    if (m_username_isSet) {
        obj.insert(QString("username"), ::dc_rest::toJsonValue(m_username));
    }
    if (m_discriminator_isSet) {
        obj.insert(QString("discriminator"), ::dc_rest::toJsonValue(m_discriminator));
    }
    if (m_status_isSet) {
        obj.insert(QString("status"), ::dc_rest::toJsonValue(m_status));
    }
    if (m_avatar_url_isSet) {
        obj.insert(QString("avatar_url"), ::dc_rest::toJsonValue(m_avatar_url));
    }
    if (m_avatar_isSet) {
        obj.insert(QString("avatar"), ::dc_rest::toJsonValue(m_avatar));
    }
    if (m_activity.isSet()) {
        obj.insert(QString("activity"), ::dc_rest::toJsonValue(m_activity));
    }
    if (m_deaf_isSet) {
        obj.insert(QString("deaf"), ::dc_rest::toJsonValue(m_deaf));
    }
    if (m_mute_isSet) {
        obj.insert(QString("mute"), ::dc_rest::toJsonValue(m_mute));
    }
    if (m_self_deaf_isSet) {
        obj.insert(QString("self_deaf"), ::dc_rest::toJsonValue(m_self_deaf));
    }
    if (m_self_mute_isSet) {
        obj.insert(QString("self_mute"), ::dc_rest::toJsonValue(m_self_mute));
    }
    if (m_suppress_isSet) {
        obj.insert(QString("suppress"), ::dc_rest::toJsonValue(m_suppress));
    }
    if (m_channel_id_isSet) {
        obj.insert(QString("channel_id"), ::dc_rest::toJsonValue(m_channel_id));
    }
    return obj;
}

QString OAIWidgetMember::getId() const {
    return m_id;
}
void OAIWidgetMember::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIWidgetMember::is_id_Set() const{
    return m_id_isSet;
}

bool OAIWidgetMember::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIWidgetMember::getUsername() const {
    return m_username;
}
void OAIWidgetMember::setUsername(const QString &username) {
    m_username = username;
    m_username_isSet = true;
}

bool OAIWidgetMember::is_username_Set() const{
    return m_username_isSet;
}

bool OAIWidgetMember::is_username_Valid() const{
    return m_username_isValid;
}

QString OAIWidgetMember::getDiscriminator() const {
    return m_discriminator;
}
void OAIWidgetMember::setDiscriminator(const QString &discriminator) {
    m_discriminator = discriminator;
    m_discriminator_isSet = true;
}

bool OAIWidgetMember::is_discriminator_Set() const{
    return m_discriminator_isSet;
}

bool OAIWidgetMember::is_discriminator_Valid() const{
    return m_discriminator_isValid;
}

QString OAIWidgetMember::getStatus() const {
    return m_status;
}
void OAIWidgetMember::setStatus(const QString &status) {
    m_status = status;
    m_status_isSet = true;
}

bool OAIWidgetMember::is_status_Set() const{
    return m_status_isSet;
}

bool OAIWidgetMember::is_status_Valid() const{
    return m_status_isValid;
}

QString OAIWidgetMember::getAvatarUrl() const {
    return m_avatar_url;
}
void OAIWidgetMember::setAvatarUrl(const QString &avatar_url) {
    m_avatar_url = avatar_url;
    m_avatar_url_isSet = true;
}

bool OAIWidgetMember::is_avatar_url_Set() const{
    return m_avatar_url_isSet;
}

bool OAIWidgetMember::is_avatar_url_Valid() const{
    return m_avatar_url_isValid;
}

QJsonValue OAIWidgetMember::getAvatar() const {
    return m_avatar;
}
void OAIWidgetMember::setAvatar(const QJsonValue &avatar) {
    m_avatar = avatar;
    m_avatar_isSet = true;
}

bool OAIWidgetMember::is_avatar_Set() const{
    return m_avatar_isSet;
}

bool OAIWidgetMember::is_avatar_Valid() const{
    return m_avatar_isValid;
}

OAIWidgetActivity OAIWidgetMember::getActivity() const {
    return m_activity;
}
void OAIWidgetMember::setActivity(const OAIWidgetActivity &activity) {
    m_activity = activity;
    m_activity_isSet = true;
}

bool OAIWidgetMember::is_activity_Set() const{
    return m_activity_isSet;
}

bool OAIWidgetMember::is_activity_Valid() const{
    return m_activity_isValid;
}

bool OAIWidgetMember::isDeaf() const {
    return m_deaf;
}
void OAIWidgetMember::setDeaf(const bool &deaf) {
    m_deaf = deaf;
    m_deaf_isSet = true;
}

bool OAIWidgetMember::is_deaf_Set() const{
    return m_deaf_isSet;
}

bool OAIWidgetMember::is_deaf_Valid() const{
    return m_deaf_isValid;
}

bool OAIWidgetMember::isMute() const {
    return m_mute;
}
void OAIWidgetMember::setMute(const bool &mute) {
    m_mute = mute;
    m_mute_isSet = true;
}

bool OAIWidgetMember::is_mute_Set() const{
    return m_mute_isSet;
}

bool OAIWidgetMember::is_mute_Valid() const{
    return m_mute_isValid;
}

bool OAIWidgetMember::isSelfDeaf() const {
    return m_self_deaf;
}
void OAIWidgetMember::setSelfDeaf(const bool &self_deaf) {
    m_self_deaf = self_deaf;
    m_self_deaf_isSet = true;
}

bool OAIWidgetMember::is_self_deaf_Set() const{
    return m_self_deaf_isSet;
}

bool OAIWidgetMember::is_self_deaf_Valid() const{
    return m_self_deaf_isValid;
}

bool OAIWidgetMember::isSelfMute() const {
    return m_self_mute;
}
void OAIWidgetMember::setSelfMute(const bool &self_mute) {
    m_self_mute = self_mute;
    m_self_mute_isSet = true;
}

bool OAIWidgetMember::is_self_mute_Set() const{
    return m_self_mute_isSet;
}

bool OAIWidgetMember::is_self_mute_Valid() const{
    return m_self_mute_isValid;
}

bool OAIWidgetMember::isSuppress() const {
    return m_suppress;
}
void OAIWidgetMember::setSuppress(const bool &suppress) {
    m_suppress = suppress;
    m_suppress_isSet = true;
}

bool OAIWidgetMember::is_suppress_Set() const{
    return m_suppress_isSet;
}

bool OAIWidgetMember::is_suppress_Valid() const{
    return m_suppress_isValid;
}

QString OAIWidgetMember::getChannelId() const {
    return m_channel_id;
}
void OAIWidgetMember::setChannelId(const QString &channel_id) {
    m_channel_id = channel_id;
    m_channel_id_isSet = true;
}

bool OAIWidgetMember::is_channel_id_Set() const{
    return m_channel_id_isSet;
}

bool OAIWidgetMember::is_channel_id_Valid() const{
    return m_channel_id_isValid;
}

bool OAIWidgetMember::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_username_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_discriminator_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_status_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_avatar_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_avatar_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_activity.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_deaf_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_mute_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_self_deaf_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_self_mute_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_suppress_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_channel_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIWidgetMember::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_username_isValid && m_discriminator_isValid && m_status_isValid && m_avatar_url_isValid && true;
}

} // namespace dc_rest
